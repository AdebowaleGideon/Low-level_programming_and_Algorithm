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

# Tasks
| File | Description |
|------|-------------|
