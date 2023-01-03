# 0x00. C-Hello, World
``C``

---
* all ``C`` files are compiled using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89
* all ``C`` files use the ``Betty`` style  
**Note:** The hash-bang direcdtive '#!" is actually processed by the kernel: when a file starts with 0x23, 0x21 (which is #!) the kernel will interpret what follows as the path to executable and attempt to run.
---

**Resource**
* [C program Compilation Process](https://www.youtube.com/watch?v=VDslRumKvRA)
* [Learning to program in C](https://www.youtube.com/watch?v=FwpP_MsZWnU)

**Note**
* C is an imperative (procedural) language created by Dennis MacAlistair Ritchie
* C file needs to be compiled (for instance gcc) to create an executable file

**Why is C awesome**
* It is the base language for other high level language (e.g., Python, Ruby, Java, JavaScript)
* It is the coding language of choice for kernel development (A kernel is the contral part of an operating system. It manages the tasks of computer and hardware - most notably memory and CPU time).
* Writing code in C ultimately tell you how a computer really works
* C code is both quite portable and efficient. It is ideal for applications which require high performanced and low memory overhead.

**Declaration**  
Syntax: ``type var_name;``  
Array Declaration: ``type var_name[number_of_items];``  
Structures Creation and declaration:
```
struct structure_name {
    type name;
    [...]
};
struct structure_name var_name;
```

Function Sytax:
```
return_type function_name(type param, type2 param2 [...])  
[block]
```

Control structures:
```
if (expression)
    [block1]
else if (expression)
    [block2]
else
    [block3]
```

```
while (expression)
    [block]
```

```
for (initialize; condition; update)
    [block]
```

```
return (expression); /* expression is the return value of the function */
return;
```

Data types | Integer types (on most 64bits computers)
| Type | Storage size |
|------|--------------|
char | 1 byte
short | 2 bytes
int | 4 bytes
long | 8 bytes

1 byte = 8bit :: value range: 1 byte = 2^8 = 256  
therefore, char: value range: -128 to 127  
unsigned type:- type restricted to hold positive value, hence enlarged by 2.  
ANSI C defines the following rules:
* short int <= int <= long int
* float <= double <= long double

Type Casting
```
float f;
int i = 10;
f = (float)i; /* assigned 10.0 to f */

f = 3.14;
i = (int)f; /* assigned 3 to i */
```

**C Standardization**
* "K & R" C
* ANSI C - (aka C89 or C90): most portable, flags -ansi, -std=c89 (default)
* C99: extends C89/C90, new data types, varable length arrays.


The entry point | main  
Program starts with the entry point. From the main function you can call other functions, when main returns, the program stops.  
``int main(void)``  
``int main(int argc, char **argv)``  
``int main(int argc, char **argv, char **env)``

``p = &c; /* p now holds the address in memory of the variable c */

## Tasks
| Task | File | Description |
|------|------|-------------|
