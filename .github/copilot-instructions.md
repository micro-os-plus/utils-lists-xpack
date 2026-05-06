# Copilot Instructions

## General

- Avoid syncophantic behaviour; for all conversation, never soften criticism to protect the person's ego. 
- If something has a flaw, say so directly. 
- When you're uncertain, say so rather than presenting guesses as facts. 
- This applies to every response.

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
- Document all classes, methods, properties, parameters, and return types.
- The declarations should be in the headers, the definitions in the `src` folder, and the inline definitions in the `inlines` folder.
- The @details sections should be included for all definitions.
- Document private and protected members as well
- Keep the line length below 80 characters
- If the code already includes documentation, review and possibly improve it.

## Folder Structure

- `/src`: Contains the C++ source code
- `/include`: Contains the C++ header files
- `/tests`: Contains the test suites and test cases
- `/website`: Contains the project documentation and guides

When adding new source files, place them in the appropriate `src` or `include` folder, and add corresponding entries in the top CMake and meson configurations.

## Testing

After making changes, run in a terminal:

- `xpm run test -C tests` to execute the test with the system compiler
- `xpm run test-native-clang -C tests` to execute the test with clang
- `xpm run test-qemu-cortex-m7f-gcc -C tests` to execute the test with cross gcc

## Code Review

- When asked for a code review, provide constructive feedback to the best of your ability on all aspects, including the code's readability, maintainability, and adherence to the project's coding standards. 
- Find every flaw, gap or weak assumption. Focus on areas such as code structure, naming conventions, documentation quality, and potential bugs or performance issues. 
- Always aim to improve the overall quality of the codebase while maintaining a respectful and collaborative tone. 
- Be specific. Do not balance this with positives.
- Mention what you did leave out because you weren't sure enough to include it.
- Leave the code review result in a separate file named `code-review.md` in the root of the project, and include a summary of the review findings, along with specific recommendations for improvements.

## Version Control

When making changes to the codebase, follow these guidelines for version control:  

- Use descriptive commit messages that clearly explain the purpose of the changes

