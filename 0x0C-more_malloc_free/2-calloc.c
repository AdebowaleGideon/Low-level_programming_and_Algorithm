#include <stdlib.h>

/**
 * _calloc - allocates memory for an array, using malloc
 * @nmemb: number of element
 * @size: size byte of each element
 *
 * Description: function allocates memory for an array of nmemb element of
 * size bytes each and returns a pointer to the allocated memory.
 * Return: pointer to the allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr = NULL;

	if (!nmemb || !size)
		return (NULL);

	ptr = malloc(nmemb * size);
	if (!ptr)
		return (NULL);
	return (ptr);
}
