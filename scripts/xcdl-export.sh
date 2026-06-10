
#!/usr/bin/env bash

# -----------------------------------------------------------------------------
#
# This file is part of the µOS++ project (http://micro-os-plus.github.io).
# Copyright (c) 2024-2026 Liviu Ionescu.  All rights reserved.
#
# Permission to use, copy, modify, and/or distribute this software
# for any purpose is hereby granted, under the terms of the MIT license.
#
# If a copy of the license was not distributed with this file, it can
# be obtained from https://opensource.org/licenses/mit.
#
# -----------------------------------------------------------------------------

# -----------------------------------------------------------------------------
# Safety settings (see https://gist.github.com/ilg-ul/383869cbb01f61a51c4d).

if [[ ! -z ${DEBUG} ]]
then
  set ${DEBUG} # Activate the expand mode if DEBUG is anything but empty.
else
  DEBUG=""
fi

set -o errexit # Exit if command failed.
set -o pipefail # Exit if pipe failed.
set -o nounset # Exit if variable not set.

# Remove the initial space and instead use '\n'.
IFS=$'\n\t'

# -----------------------------------------------------------------------------
# Identify the script location, to reach, for example, the helper scripts.

script_path="$0"
if [[ "${script_path}" != /* ]]
then
  # Make relative path absolute.
  script_path="$(pwd)/$0"
fi

export script_path
export script_name="$(basename "${script_path}")"

export script_folder_path="$(dirname "${script_path}")"
export script_folder_name="$(basename "${script_folder_path}")"

# =============================================================================

argv="$@"

source "node_modules/@xpack/npm-packages-helper/maintenance-scripts/scripts-helper-source.sh"

# $1: liquid source
# $2: destination file path
function substitute()
{
  local _from_file_path="$1" # liquid source
  local _to_file_path="$2" # destination

  echo "liquidjs -> ${_to_file_path}"
  # pwd

  liquidjs \
    --context "${xcdl_context}" \
    --template "@${_from_file_path}" \
    --output "${_to_file_path}.new" \
    --strict-filters \
    --strict-variables \
    --lenient-if \

  rm -f "${_to_file_path}"
  mv "${_to_file_path}.new" "${_to_file_path}"
}

# -----------------------------------------------------------------------------

if [[ $# -ne 1 ]]
then
  echo "Usage: $(basename "$0") <xcdl-library.json>"
  exit 1
fi

xcdl_package_jsonc_path="$1"

echo
echo "Processing ${xcdl_package_jsonc_path}..."

# -----------------------------------------------------------------------------

project_folder_path="$(dirname "${script_folder_path}")"

if [ ! -f "${project_folder_path}/package.json" ]
then
  echo "missing mandatory ${project_folder_path}/package.json..."
  exit 1
fi

if [ ! -f "${project_folder_path}/config/top-templates.json" ]
then
  echo "missing mandatory ${project_folder_path}/config/top-templates.json..."
  exit 1
fi

if [ ! -f "${xcdl_package_jsonc_path}" ]
then
  echo "missing mandatory ${xcdl_package_jsonc_path}..."
  exit 1
fi


xcdl_context="{}"

serialise_string_property_to "xcdl_context" "libraryFilePath" \
      "${xcdl_package_jsonc_path}" "xcdl_"

# Read in top package.json.
xpack_package_json="$(json -f "${project_folder_path}/package.json" -o json-0)"

serialise_string_property_to "xcdl_context" "packageScopedName" \
  "$(echo "${xpack_package_json}" | json name)" "xpack_"

if echo "${xpack_package_scoped_name}" | egrep -e '^@' >/dev/null
then
  serialise_string_property_to "xcdl_context" "packageScope" \
    "$(echo "${xpack_package_scoped_name}" | sed -e 's|^@||' -e 's|/.*||' )" "xpack_"
else
  serialise_string_property_to "xcdl_context" "packageScope" \
    "" "xpack_"
fi

serialise_string_property_to "xcdl_context" "packageName" \
    "$(echo "${xpack_package_scoped_name}" | sed -e 's|^@[a-zA-Z0-9-]*/||')" "xpack_"

serialise_string_property_to "xcdl_context" "packageVersion" \
  "$(echo "${xpack_package_json}" | json version)" "xpack_"

serialise_string_property_to "xcdl_context" "packageDescription" \
  "$(echo "${xpack_package_json}" | json description)" "xpack_"

# Read in top-templates.json.
xpack_top_config="$(json -f "${project_folder_path}/config/top-templates.json" -o json-0)"

serialise_string_property_to "xcdl_context" "descriptiveName" \
  "$(echo "${xpack_top_config}" | json descriptiveName)" "xpack_"

# Read in xcdl-package.jsonc and convert to plain JSON.
xcdl_package_json="$(json5 "${xcdl_package_jsonc_path}" | json -o json-0)"

component=$(echo "${xcdl_package_json}" | json cdlPackage.cdlComponents | json 0)

serialise_string_property_to "xcdl_context" "name" \
  "$(echo "${component}" | json name)" "xcdl_"

serialise_string_property_to "xcdl_context" "description" \
  "$(echo "${component}" | json description)" "xcdl_"

serialise_array_property_to "xcdl_context" "publicIncludeFolders" \
  "$(folders=$(echo "${component}" | json "publicIncludeFolders" -o json-0); echo "${folders:-[]}")" "xcdl_"

serialise_array_property_to "xcdl_context" "sourceFiles" \
  "$(files=$(echo "${component}" | json "sourceFiles" -o json-0); echo "${files:-[]}")" "xcdl_"

serialise_array_property_to "xcdl_context" "publicDefines" \
  "$(defs=$(echo "${component}" | json "publicDefines" -o json-0); echo "${defs:-[]}")" "xcdl_"

options=$(echo "${component}" | json publicCompilerOptions)

if [ -n "${options}" ]
then
  echo "compiler options:"
  echo "${options}" 
  exit 1

  opts_target=$(echo "${component}" | json "publicCompilerOptions.target" -o json-0); echo "${opts_target:-[]}"
  opts_optimisations=$(echo "${component}" | json "publicCompilerOptions.optimisations" -o json-0); echo "${opts_optimisations:-[]}"
  opts_warnings=$(echo "${component}" | json "publicCompilerOptions.warnings" -o json-0); echo "${opts_warnings:-[]}"
  opts_debugging=$(echo "${component}" | json "publicCompilerOptions.debugging" -o json-0); echo "${opts_debugging:-[]}"
  opts_miscellaneous=$(echo "${component}" | json "publicCompilerOptions.miscellaneous" -o json-0); echo "${opts_miscellaneous:-[]}"
fi

opts=""
serialise_array_property_to "xcdl_context" "publicCompilerOptions" \
  "$(echo "${opts:-[]}")" "xcdl_"

serialise_array_property_to "xcdl_context" "dependencies" \
  "$(deps=$(echo "${component}" | json "dependencies" -o json-0); echo "${deps:-[]}")" "xcdl_"

echo
echo -n '"xcdl_context": '
echo "${xcdl_context}" | json

echo
echo "environment variables: "
echo
env | egrep '^xcdl_' | sort
env | egrep '^xpack_' | sort

echo
echo "generating build files..."
echo

substitute "${script_folder_path}/templates/CMakeLists-liquid.txt" "CMakeLists.txt"
substitute "${script_folder_path}/templates/meson-liquid.build" "meson.build"

echo
echo "'${script_name} ${argv}' done"

# Completed successfully.
exit 0

# -----------------------------------------------------------------------------

