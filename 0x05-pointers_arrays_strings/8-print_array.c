#include <stdio.h>

/**
 * print_array - prints 'n' elements of an array, followed by a new line.
 * @a: pointer to integer array head
 * @n: number of elements of the array to be printed
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n - 1; i++)
		printf("%d, ", a[i]);
	printf("%d\n", a[i]);
}
