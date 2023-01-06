#include <stdio.h>

/**
 * main - Entry Point
 *
 * Description: finds and prints the largest prime factor of 612852475143
 * followed by a new line (no hard coding value)
 * Return: Always 0 (Success)
 */
int main(void)
{
	long i, value = 612852475143;

	for (i = 2; i <= value; i++)
	{
		while (value % i == 0)
			value /= i;
		if (i >= value)
			printf("%ld\n", i);
	}
	return (0);
}
