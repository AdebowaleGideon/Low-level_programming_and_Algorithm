# 0x0C. C - More malloc, free
`C` `Memory allocation`

**Resource**
* [Do I cast the result of malloc and free](https://stackoverflow.com/questions/605845/do-i-cast-the-result-of-malloc)

**Note**  
The `calloc()` function allocates memory for an array of `nmemb` elements of `size` bytes each and retrns a pointer to the allocated memory. The memory is set to zero. If `nmemb or `size` is 0, `calloc()` returns either NULL, or a unique pointer value that can later be successfuly passed to free().  
If the multication of `nmemb` and `size` would result in integer overflow, then `calloc()` returns an error.
* Prototype: `void \*calloc(size_t nmemb, size_t size);`

The `realloc()` function changes the size of the memory block pointed to by `ptr` to `size` bytes. If the new size is larger than the old size, the added memory will not be initialized. if `ptr` is NULL, then the call is equivalent to `malloc(size)`. If `size` is zero, and `ptr` is not NULL, then the call is equivalent to `free(ptr)`.
* Prototype: `void \*realloc(void \*ptr, size_t size);`


## Tasks

| File | Description |
|------|-------------|
[0-malloc_checked.c](./0-malloc_checked.c) | allocates memory using malloc and returns a pointer to the allocated memory.
[1-string_nconcat.c](./1-string_nconcat.c) | concatenates two strings and returns a pointer to the newly allocated space in memory, which contain both string and null byte terminator.
[2-calloc.c](./2-calloc.c) | function allocates memory for an array of nmemb elements of size bytes each and returns a pointer to the allocated memory.
[3-array_range.c](./3-array_range.c) | reates an array of integers. The array created contain all the values from min (included) to max (included), ordered from min to max.
[100-realloc.c](./100-realloc.c) | reallocates a memory block using malloc and free (read note on `realloc()`)
[main.h](./main.h) | header file
