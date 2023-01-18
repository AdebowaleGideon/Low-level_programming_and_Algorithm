#include <stdlib.h>

/**
 * malloc_checked - allocates memory using 'malloc'
 * @b: bytes (memory space to allocate)
 * Return: pointer to the allocated memory, exit status 98 (if malloc fails)
 */
void *malloc_checked(unsigned int b)
{
	void *ptr = NULL;

	ptr = malloc(b);
	if (!ptr)
		exit(98);
	return (ptr);
}
