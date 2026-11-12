# 03 — Doxygen

## What is Doxygen?

Doxygen is a documentation generator. It reads specially formatted comments in source-code files and uses them to create documentation, commonly as HTML or PDF.

## Why is it useful?

- Explains what functions, classes, and variables do.
- Makes code easier for other developers to understand.
- Keeps documentation close to the source code.
- Can generate navigable HTML documentation.

## Common documentation commands

| Command | Purpose |
|---|---|
| `\\brief` | Short description |
| `\\param` | Describes a function parameter |
| `\\return` | Describes the return value |
| `\\details` | Provides a longer explanation |
| `\\author` | Names the author |
| `\\file` | Documents a file |

## Example

```cpp
/**
 * \\brief Adds two integers.
 * \\param a First integer.
 * \\param b Second integer.
 * \\return Sum of the two integers.
 */
int add(int a, int b);
```

## Generating documentation

1. Install Doxygen.
2. Run `doxygen -g` to create a configuration file named `Doxyfile`.
3. Edit the configuration file. Set `INPUT` to the source folder and `GENERATE_HTML` to `YES`.
4. Run `doxygen Doxyfile`.
5. Open `html/index.html` in a browser.

## What I learned

Doxygen uses structured comments to generate documentation automatically. Writing clear comments makes programs easier to maintain and use.

## Practical task

Use the source file in `Examples/` to generate HTML documentation.
