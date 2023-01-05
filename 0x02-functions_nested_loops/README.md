# 0x02. C-Functions, nested loops
``C``

gcc flags used during compilation
```
gcc -Wall -pedantic -Werror -Wextra -std=gnu89
```

**Note**  
**C - Header Files**
A header file is a file with extension **.h** which contains C function declarations and macro definitions to be shared between several source files. There are two type of header files: ones that the programmer writes and ones that come with the compiler.  
You request to use a header file in your program by including it with the C preprocessing directive **#include**

A simple practice in C/C++ programs is that you keep all the constants, macros, system wide global variables, and function prototypes in the header files and include the header file wherever it is required.

``#include <file>`` is used for system header files. It searches for a file named 'file' in a standarad list of system directories. You can prepend directories to this list with the -I option while compiling the source code.

``#include "file"`` is used for header files of your own program. It searches for a file named 'file' in the directory containing the current file. You can prepend directories to this list with the -I option while compiling your source code.

If a header file happens to be included twice, the compiler will process its contents twice and it will result in an error. The standard way to prevent this is to use **guide** (i.e., enclose the entire real contents of the file in a conditional, like this -
```
#ifndef HEADER_FILE
#define HEADER_FILE

the entire header_file file

#endif
```
When the header is included again, the conditional will be false, because ``HEADER_FILE`` id defined and the preprocessor will skip over the entire contents of the file.


## Tasks
| File | Description |
|------|-------------|
[0-putchar.c](./0-putchar.c) | prints \_putchar, followed by a new line using the \_putchar function
[1-alphabet.c](./1-alphabet.c) | rints the alphabet, in lowercase, followed by a new line using the \_putchar function
[2-print_alphabet_x10.c](./2-print_alphabet_x10.c) | prints 10 times the alphabet, in lowercase, followed by a new line using the \_putchar function only twice
[3-islower.c](./3-islower.c) | checks for lowercase character using the \_putchar function only
[4-isalpha.c](./4-isalpha.c) | checks if character is a letter (lowercase or uppercase) using the \_putchar function only
[5-sign.c](./5-sign.c) | prints the sign of a number
[6-abs.c](./6-abs.c) | computes the absolute value of an integer
[7-print_last_digit.c](./7-print_last_digit.c) | prints the last digit of a number using the \_putchar function only
[8-24_hours.c](./8-24_hours.c) | prints every minute of the day of Jack Bauer, starting from 00:00 to 23:59 using the \_putchar function only
[9-times_table.c](./9-times_table.c) | prints the 9 times table, starting with 0 using the \_putchar function only
[10-add.c](./10-add.c) | adds two integers and returns the result
[11-print_to_98.c](./11-print_to_98.c) | prints all natural numbers from n to 98, followed by a new line
[100-times_table.c](./100-times_table.c) | prints the n times table, starting with 0 using the \_putchar function only
[101-natural.c](./101-natural.c) | computes and prints the sum of all the multiples of 3 or 5 below 1024 (excluded), followed by a new line
[102-fibonacci.c](./102-fibonacci.c) | prints the first 50 Fibonacci numbers, starting with 1 and 2, followed by a new line
[103-fibonacci.c](./103-fibonacci.c) | considering the terms in the Fibonacci sequence whose values do not exceed 4,000,000, program finds and prints the sum of the even-valued terms, followed by a new line
[104-fibonacci.c](./104-fibonacci.c) | Prints first 98 Fibonacci numbers, starting with 1 and 2, followed by a new line (no malloc, pointers, arrays/tables, or structures)
