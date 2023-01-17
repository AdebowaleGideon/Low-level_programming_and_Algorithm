# 0x0B. C - malloc, free
`C` `Memory allocation`

**Draw me nearer to the cross where thou art died. I am thine O Lord.**  
**Resource**
* [Static, Automatic and dynamic allocation](https://www.gnu.org/software/libc/manual/html_node/Memory-Allocation-and-C.html)

**Note**  
**Difference between automatic and dynamic allocation**  
Automatic allocation happends when you declare an automatic variable, such as a function argument or a local variable. The space for an automatic variable is allocated when the compound statement containing the declaration is entered, and is freed when that compound statement is exited.

Why dynamic allocation  
When we do not know in advance how much memory is needed except at runtime, after compilation. memory is needed to be dynamically created (requested from the OS using the function `malloc` while being executed)

**malloc, calloc, realloc**  
The `malloc` function is used to allocate a certain amount of memory during the execution of a program. **It will request a block of memory from the heap, if the request is granted, the operating system will reserve the requested amount of memory and `malloc` will return a pointer to the reserved space**  
* Prototype: `void *malloc(size_t size);`
* where `void *` means it is a pointer to the type of your choice
* and `size` is the number of bytes you need to allocate

```
#include <stdio.h>
#include <stdlib.h>

/**
 * main - introduction to malloc and free
 *
 * Return: 0.
 */
int main(void)
{
    int *tab;

    tab = malloc(sizeof(*tab) * 3);
    tab[0] = 98;
    tab[1] = -1024;
    tab[2] = 402;
    printf("%d, %d, %d\n", tab[0], tab[1], tab[2]);
    return (0);
}
```
In the above example, we are using `malloc` to create a space in memory where we can store three integers. Again, by using `sizeof` instead of directly a number of bytes (`12` for instance in this case if using a 64 bits machine) we are sure to get the right amount of memory, no matter what system we are compiling and running on.

on error, `malloc` returns `NULL`.

**free**  
When a memory space created in the heap is not needed anymore, you must return it to the operating system (deallocate) by calling the function `free`.
If this is not done, then the program can run out of memory, or the Operating system could even kill the program while it is running.

The `free` function frees the memory space which have been allocated by a previous call to `malloc` (or `calloc`, or `realloc`).
* Prototype: `void free(void *ptr);`
* Where `ptr` is the address of the memory space previously allocated by and returned by a call to malloc

**Valgrind**
When writing big and complex programs, it is not always easy to keep track of all allocated and deallocated memory. We can use the program `Valgrind` (a memory debugging tool) in order to ensure we are freeing all allocated memory.
* Prototype: `valgrind ./<program_name>`


**Miscellaneous**  
when a variable is a pointer, it value can not be modified with the variable (becuase it only hold an address to that value).  
when a variable is an array, it holds a **copy** of the string. So it is possible to modify this copy.

The macro `NULL` is a null-**pointer** constant of value 0 in `C`. NULL is used as the value of a pointer that has not been instantiated.

## Tasks

| File | Description |
|------|-------------|
[0-create_array.c](./0-create_array.c) | creates an array of chars, and initializes it with a specific char
[1-strdup.c](./1-strdup.c) | returns a pointer to a newly allocated space in memory, which contains a copy of the string given as a parameter
[2-str_concat.c](./2-str_concat.c) | concatenates two strings and return pointer to a newly allocated space in memory which contains both strings
[3-alloc_grid.c](./3-alloc_grid.c) | returns a pointer to a 2 dimensional array of integers (each element of the grid is initialized to 0)
[4-free_grid.c](./4-free_grid.c) | frees a 2 dimensional grid previously created by the [alloc_grid](./3-alloc_grid.c) function
[100-argstostr.c](./100-argstostr.c) | concatenates all the arguments passed to the program and appends each with a '\n' in the new string
[101-strtow.c](./101-strtow.c) | splits a string into words and returns a pointer to an array of strings (words)
