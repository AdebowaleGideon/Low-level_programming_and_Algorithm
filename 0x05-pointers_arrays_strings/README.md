# 0x05. C - Pointers, arrays and strings
``C``

gcc flags used during compilation:  
``gcc -Wall -pedantic -Werror -Wextra -std=gnu89``


**Resource**
* [Memory Layout](https://aticleworld.com/memory-layout-of-c-program/)

**Note**  
Every time you declare a variable, the computer will reserve memory for this variable, which then store the value of the variable.  
Depending on the type of the variable, the computer will reserve more or less memory. The size depends on the variable type and also on the computer you are using.

In this example, we simply declare a variable 'c' of type 'char'; then assign the value 'H' which is stored in a particular address in the memory (not controlled by you) of size 1 byte as '72' (ascii). **had it been type 'int' the storage size will be 4 byte**.  
to get the variable address, use **'&'** and you can use **'%p'** to print addresses (the value of pointers) with printf.
```
char c;

c = 'H';
```

A pointer is simply the address of a piece of data in memory. The General form is:
```
var_type *var;
```
* The '\*' tells that the variable 'var' is a pointer to a 'var_type'
* The value 'var' will be a memory address holding a value of type 'var_type'

Because a pointer is like other variable, the computer wil also reserve the right amount of memory for it to store its value. On most 64 bits machines, the size of pointers is 8 bytes. To get the address where a pointer is stored, you can use '&' operator.  
**Note: a pointer can only point to a variable of the type it is supposed to point to**

**Dereferencing**  
The real power of pointers is that they can manipulate values stored at the memory address they point to. this is called deferencing. To do this, you can use the dereference operator '\*'.

Note that '\*':
* at declaration, it is used to declare a variable of type pointer to something. Example: int \*n;
* when used inside the code it is used to dereference pointers. Example \*n = 98;

**Array**  
Array in C are contiguous memory areas that holds a number of values of the same type. The General form is:
```
type var_name[number_of_elements];
```
Here the computer will reserve a continuous space of 5 integers (5 x 4 bytes) in memory.

**Pointers vs Arrays**  
In C, *an array is Not a pointer*, the variables declared as array do not hold a memory address. Array names are identifiers that identify the entire array object. That is why we can not change the value of a 'variable' which is an array. **But you can still use the name of the array in your code, and its value will be the address of the first element of the array**  
**Why:** When the name of an array is used in an expression, the array type gets automatically implicitly converted to pointer-to-element type in almost all contexts (this is often referred to as "array type decay"). The resultant pointer is a completely independent temporary value, that is the address of the first element of the array.
```
int *p;
int t[10];

p = t; /* This works because of the auto implicit conversion of (int *) */
```
The two exceptions to this: when the array name is an operand of sizeof or unary & (address-of), the name of the array then refers to the array object itself.

**Pointers Arithmetic**  
Another way to access different elements of an array, is to use ``*(var + x)`` where ``var`` is the name of an array and ``x`` is the count. this arithmetic also works for 'regular' pointers.

```
#include <stdio.h>

/**
 * main - pointers arithmetic
 *
 * Return: Always 0.
 */
int main(void)
{
   int *p;
   int a[2];
   int n;

   p = &n;
   printf("p = &n;\np: %p\n", p);
   printf("p + 1: %p\n", p + 1);
   printf("p + 2: %p\n", p + 2);
   printf("p + 10: %p\n", p + 10);
   /* possible since a is evaluated */
   /* as an int * in this context */
   p = a;
   printf("p = a;\np: %p\np + 1: %p\n", p, p + 1);
   return (0);
}
ubuntu@ubuntu:~/gideon$ gcc main.c && ./a.out
p = &n;
p: 0x7ffd90a8cd2c
p + 1: 0x7ffd90a8cd30
p + 2: 0x7ffd90a8cd34
p + 10: 0x7ffd90a8cd54
p = a;
p: 0x7ffd90a8cd30
p + 1: 0x7ffd90a8cd34
```
Note the memory distributions to variables.

**String**  
we can create an array of chars: 
```
char a[7] = "School";
```
while the string has 6 characters, we used an array of 7 characters because in **C**, string end with the char **'\0'** (ascii value = 0). Since every string in **C** ends with **'\0'** we do not need to know their size to use them. By knowing the address of the first character of strings (with a pointer to a char), C function can easily print them using a loop, until they hit the character **'\0'**



## Tasks
| File | Description |
|------|-------------|
[0-reset_to_98](./0-reset_to_98) | takes a pointer to an int as parameter and updates the value it points to to 98
[1-swap.c](./1-swap.c) | swaps the values of two integers
[2-strlen.c](./2-strlen.c) | returns the length of a string
[3-puts.c](./3-puts.c) | prints a string, followed by a new line, to stdout
[4-print_rev.c](./4-print_rev.c) | prints a string, in reverse, followed by a new line
[5-rev_string.c](./5-rev_string.c) | reverses a string
[6-puts2.c](./6-puts2.c) | prints every other character of a string, starting with the first character, followed by a new line
[7-puts_half.c](./7-puts_half.c) | prints second half of a string, followed by a new line
[8-print_array.c](./8-print_array.c) | prints n elements of an array of integers, followed by a new line
[9-strcpy.c](./9-strcpy.c) | copies the string pointed to by src, including the terminating null byte (\0), to the buffer pointed to by dest
[100-atoi.c](./100-atoi.c) | convert a string to an integer (The number in the string can be preceded by an infinite number of characters; taking into account all '-' and '+' before the number
[main.h](./main.h) | header file
