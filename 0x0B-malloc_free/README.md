# 0x0B. C - malloc, free
`C` `Memory allocation`

**Draw me nearer to the cross where thou art thy. I am thine O Lord.**
**Resource**
* [Static, Automatic and dynamic allocation](https://www.gnu.org/software/libc/manual/html_node/Memory-Allocation-and-C.html)

**Note**  
**Difference between automatic and dynamic allocation**  
Automatic allocation happends when you declare an automatic variable, such as a function argument or a local variable. The space for an automatic variable is allocated when the compound statement containing the declaration is entered, and is freed when that compound statement is exited.

Why dynamic allocation  
When we do not know in advance how much memory is needed except at runtime, after compilation. memory is needed to be dynamically created (requested from the OS using the function `malloc` while being executed)

**malloc, calloc, realloc**  
The `malloc` function is used to allocate a certain amount of memory during the execution of a program. **It will request a block of memory from the heap, if the request is granted, the operating system will reserve the requested amount of memory and `malloc` will return a pointer to the reserved space**

**free**  
When a memory space created in the heap is not needed anymore, you must return it to the operating system by calling the function `free`.

**How to use valgrind**


**Miscellaneous**  
when a variable is a pointer, it value can not be modified with the variable (becuase it only hold an address to that value).  
when a variable is an array, it holds a **copy** of the string. So it is possible to modify this copy.

## Tasks

| File | Description |
|------|-------------|
