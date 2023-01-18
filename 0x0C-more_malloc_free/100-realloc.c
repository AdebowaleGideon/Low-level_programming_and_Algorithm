#include <stdlib.h>

/**
 * _realloc - reallocates a memory block using malloc and free
 * @ptr: pointer to the memory previously allocated with a call to malloc
 * @old_size: size in bytes of the allocated space for ptr
 * @new_size: size in byte of the new memory block
 *
 * Return: pionter to the newly reallocated memory block
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int i = 0;
	char *dup, *clone;

	if (!ptr)
		dup = malloc(new_size);
	else
	{
		clone = ptr;
		if (new_size == 0)
			free(ptr);
		else if (new_size != old_size)
		{
			dup = malloc(new_size);
			if (!dup)
				return (NULL);
			while (i < new_size)
			{
				if (i >= old_size)
					break;
				*(dup + i) = *(clone + i);
				i += 1;
			}
		}
	}
	free(ptr);
	return (dup);
}
