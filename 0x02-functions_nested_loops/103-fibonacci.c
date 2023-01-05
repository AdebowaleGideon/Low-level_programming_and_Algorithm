#include <stdio.h>

/**
 * main - Entry Point
 *
 * Description: finds and print the sum of the even-valued terms,
 * followed by a newline. Starting with 1 and 2
 * Return: Always 0 (Success)
 */
int main(void)
{
	int sum = 0, i = 1, j = 2;

	while (i <= 4000000)
	{
		if (i % 2 == 0)
			sum += i;
		j += i;
		i = j - i;
	}
	printf("%d\n", sum);
	return (0);
}
