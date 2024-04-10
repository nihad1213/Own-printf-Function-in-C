![printf](https://github.com/simararustam/holbertonschool-printf-TEST/assets/115341811/3720036d-baef-4522-a75f-e4a5eb983bc1)
# Own printf Function

This C program implements a simplified version of the `printf` function. The `printf` function in C is used to print formatted output to the standard output (usually the console).

## File Structure

- `main.h`: Header file containing function prototypes.
- `_printf.c`: Source file containing the implementation of the `_printf` function.
- `main.c`: Example usage of the `_printf` function.

## Compilation

To run the program, use a C compiler such as GCC:

```bash
gcc main.c
```
## Usage
In your C code, include the main.h header file, and you can use the _printf function to print formatted output. The _printf function supports the following format specifiers:

| Symbol | Operation |
|--|--|
| `%c` | Prints character |
| `%s` | Prints string |
| `%%` | Prints modulus operator |
| `%d` | Prints integer |
| `%i` | Also prints integer |
| `%` | Prints nothing |

## Example Usage
```
#include "main.h"

int main(void) {
    _printf("Hello, %s! This is a number: %d\n", "world", 42);
    return 0;
}
```
## Function Explanation
The `_printf` function takes a format string and variable arguments (variadic arguments) and prints formatted output according to the format specifier in the string. It returns the number of characters printed.

- `_printf(const char *format, ...)`: Main function to print formatted output.
- `format`: Format string containing format specifiers.
- `Returns`: Number of characters printed.

## Note
This implementation is simplified and may not cover all edge cases or advanced features of the standard `printf` function.
