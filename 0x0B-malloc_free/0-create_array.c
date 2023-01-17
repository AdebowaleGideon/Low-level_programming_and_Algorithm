#include <stdlib.h>

/**
 * create_array - creates an array of chars, and initializes it with a
 * specific char
 * @size: array size
 * @c: character to fill array with
 * Return: pointer to the array. NULL (failure)
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i = 0;
	char *arr = NULL;

	if (!size)
		return (NULL);

	arr = malloc(sizeof(*arr) * size);
	if (arr == NULL)
		return (NULL);

	while (i < size)
		arr[i++] = c;
	return (arr);
}
