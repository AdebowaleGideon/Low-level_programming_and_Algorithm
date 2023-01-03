#include <stdio.h>

/**
 * main - Entry Point
 *
 * Description: prints all possible combinations of single-digit numbers.
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num = 0;

	while (num < 10)
	{
		putchar(num + 48);
		if (num != 9)
		{
			putchar(',');
			putchar(' ');
		}
		num += 1;
	}
	putchar('\n');
	return (0);
}
