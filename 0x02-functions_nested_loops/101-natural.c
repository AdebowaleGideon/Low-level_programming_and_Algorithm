#include <stdio.h>

/**
 * main - Entry Point
 *
 * Description: Compute sum  of all natural number that are multiple of 3 & 5
 * below 1024
 * Return: Always 0 (Success)
 */
int main(void)
{
	int sum = 0, i;

	for (i = 0; i < 1024; i++)
		if (i % 3 == 0 || i % 5 == 0)
			sum += 1;
	printf("%d\n", sum);
	return (0);
}
