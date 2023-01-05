#include <stdio.h>

/**
 * main - Entry Point
 *
 * Description: Print first 98 Fibonacci number starting with 1 and 2, followed
 * by a newline. (no long long, malloc, pointers, arrays/table, or structure)
 * Return: Always 0 (Success)
 */
int main(void)
{
	unsigned long int count, i, j, i1, i2, j1, j2;

	i = 1;
	j = 2;

	printf("%lu", i);
	for (count = 2; count <= 91; count++, j += i, i = j - i)
		printf(", %lu", j);

	i1 = i / 1000000000;
	i2 = i % 1000000000;
	j1 = j / 1000000000;
	j2 = j % 1000000000;

	for (; count <= 98; ++count)
	{
		printf(", %lu", j1 + (j2 / 1000000000));
		printf("%lu", j2 % 1000000000);
		j1 += i1;
		j2 += i2;
		i1 = j1 - i1;
		i2 = j2 - i2;
	}
	printf("\n");
	return (0);
}
