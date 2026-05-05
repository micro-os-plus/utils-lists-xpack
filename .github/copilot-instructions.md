# Copilot Instructions

## Language and Tone

- Use British English spelling and grammar (e.g., "behaviour", "colour", "organise", "analyse", "favour", "innitialise", etc.)
- Maintain a professional and formal tone in all generated content
- Avoid colloquialisms, slang, or informal expressions
- Avoid humour, jokes, or casual remarks
- Use clear, precise, and professional language appropriate for technical documentation
- Avoid contractions (e.g., use "do not" instead of "don't")
- Use the Oxford comma in lists for clarity
- Maintain consistency in terminology throughout the codebase
- Prefer "folder" to "directory"

## Code Style

- Follow the existing C++ code style defined in the .clang-format file.
- Use consistent formatting and naming conventions based on prettier and clang-format configurations

## Documentation

- Add comprehensive documentation comments accepted by Doxygen
- Document all classes, methods, properties, parameters, and return types declared in all include files, except those in the `inlines` folder, suffixed with `-inlines.h`
- For inline definitions in the header files, provide the @details too.
- The header files in the `inlines` folder include template definitions. Update the @details sections for all definitions. If there are inner classes defined there, fully document them.
- The source files in the `src` folder include the implementation of the methods declared in the header files. Update the @details sections for all methods. 
- Document private and protected members as well
- Keep the line length below 80 characters
- If the code already includes documentation, review and possibly improve it

## Folder Structure

- `/src`: Contains the C++ source code
- `/include`: Contains the C++ header files
- `/tests`: Contains the test suites and test cases
- `/website`: Contains the project documentation and guides

When adding new source files, place them in the appropriate `src` or `include` folder, and add corresponding entries in the top CMake and meson configurations.

## Testing

After making changes, run the `xpm run test -C tests` command in a terminal.

## Code Review

When asked for a code review, to the best of your ability, provide constructive feedback on the code's readability, maintainability, and adherence to the project's coding standards. Focus on areas such as code structure, naming conventions, documentation quality, and potential bugs or performance issues. Always aim to improve the overall quality of the codebase while maintaining a respectful and collaborative tone.

Leave the code review result in a separate file named `code-review.md` in the root of the project, and include a summary of the review findings, along with specific recommendations for improvements.

## Version Control

When making changes to the codebase, follow these guidelines for version control:  

- Use descriptive commit messages that clearly explain the purpose of the changes

