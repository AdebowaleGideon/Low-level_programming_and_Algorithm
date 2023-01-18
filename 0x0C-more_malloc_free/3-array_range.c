#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: minimum
 * @max: maximum
 *
 * Description: the created array should contain all the values from min to max
 * (both included), other from min to max
 * Return: pointer to the newly created array
 */
int *array_range(int min, int max)
{
	int i, diff;
	int *ptr = NULL;

	if (min > max)
		return (NULL);

	diff = max - min;
	ptr = malloc(sizeof(*ptr) * (diff + 1));
	if (!ptr)
		return (NULL);

	for (i = 0; i <= diff; i++, min++)
		ptr[i] = min;
	return (ptr);
}
