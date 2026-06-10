import { format, applyEdits } from 'jsonc-parser'
import { readFileSync, writeFileSync } from 'fs'
import { globSync } from 'glob'

// The `xcdl*.json` is included temporarily, until it'll be renamed as jsonc.
const files = globSync(['**/*.jsonc', '**/xcdl*.json'], {
  ignore: [
    '**/node_modules/**',
    '**/xpacks/**',
    '**/builds/**',
    '**/website/**',
  ],
})

for (const file of files) {
  const text = readFileSync(file, 'utf8')
  const edits = format(text, undefined, { tabSize: 2, insertSpaces: true })
  const formatted = applyEdits(text, edits)
  writeFileSync(file, formatted)

  console.log(file)
}
