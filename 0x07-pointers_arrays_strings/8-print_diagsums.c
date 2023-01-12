#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals of a square matrix
 * of integers.
 *
 * @a: pointer to the matrix (ie a matrix that has been casted into an array)
 * @size: matrix size
 */
void print_diagsums(int *a, int size)
{
	int i, r_diagsum, l_diagsum;

	for (r_diagsum = l_diagsum = i = 0; i < size; i++)
	{
		r_diagsum += a[((size) * i) + i];
		l_diagsum += a[(size * (i + 1)) - (i + 1)];
	}
	printf("%d, %d\n", r_diagsum, l_diagsum);
}
