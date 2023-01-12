# 0x07. C - Even more pointers, arrays and strings
`C`

**Note**  
A pointer to a pointer is a form of multiple indirection, or a chain of pointers. When a pointer to a pointer is define, the fist pointer contains the address to the secod pointer, which points to the location that contains the actual value.

**Multi-dimensional Arrays in C**
C programming allows multidimensional arrays. the following declaration creates a three dimensional integer array -
```
int 3D[4][5][6];
```
The simplest form of the multidimensional array is the 2D array.
```
type arrayName[row][col];
```
Initializing 2D Arrays
```
int a[3][4] = {
    {0, 1, 2, 3} ,	/* initializers for row indexed by 0 */
    {4, 5, 6, 7} ,	/* initializers for row indexed by 1 */
    {8, 9, 10, 11}	/* initializers for row indexed by 2 */
};

int val = a[2][3];	/* accessing the 4th col of the 3rd row */
```
While specifying value for the row can be omitted, the col can never be as the memory needs to be how much memory resevervation is need for the inner content ahead at time of declaration.

note: memory area is different from string as a string is null byte terminated, while the size of the memory area buffer must be provided for any modification to the buffer. **This earmarks why strcpy is different from memcpy and other similar functions.**

# Tasks
| File | Description |
|------|-------------|
[0-memset.c](./0-memset.c) | unction fills the first 'n' bytes of the memory area pointed to by 's' with the constant byte 'b'. Returns a pointer to the memory area 's'.
[1-memcpy.c](./1-memcpy.c) |  function copies 'n' bytes from memory area 'src' to memory area dest. Returns a pointer to 'dest'.
[2-strchr.c](./2-strchr.c) | locates a character in a string. Returns a pointer to the first occurence of the character 'c' in the string 's', or NULL if not found.
[3-strspn.c](./3-strspn.c) | gets the length of a prefix substring. Returns the number of bytes in the initial segment of s which consist only of bytes from accept.
[4-strpbrk.c](./4-strpbrk.c) |  function locates the first occurrence in the string s of any of the bytes in the string accept. Returns a pointer to the byte in s that matches one of the bytes in accept, or NULL if no such byte is found.
[5-strstr](./5-strstr) | function finds the first occurrence of the substring needle in the string haystack. The terminating null bytes (\0) are not compared.
[7-print_chessboard.c](./7-print_chessboard.c) | prints the chessboard.
[8-main.c](./8-main.c)\n[8-print_diagsums.c](./8-print_diagsums.c) | depict how C programming handles array to array in the memory.
[100-set_string.c](./100-set_string.c) | sets the value of a pointer to a char.
[101-crackme_password](./101-crackme_password) | contains the password for the [crackme2](https://github.com/holbertonschool/0x06.c) executable
