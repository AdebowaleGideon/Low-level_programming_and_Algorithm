# 0x02. C-Functions, nested loops
``C``

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
