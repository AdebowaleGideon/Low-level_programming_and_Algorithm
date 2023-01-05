#include <stdio.h>

/**
 * main - Entry Point
 *
 * Description: print, the first 50 Fibonacci number, starting with 1 and 2
 * (number must be separated by comma, followed by a space)
 * Return: Always 0 (Success)
 */
int main(void)
{
	int count = 0;
	long i = 1, j = 2;

	while (++count < 50)
	{
		printf("%lu, ", i);
		j += i;
		i = j - i;
	}
	printf("%lu\n", i);
	return (0);
}
