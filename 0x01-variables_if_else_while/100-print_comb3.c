#include <stdio.h>

/**
 * main - Entry Point
 *
 * Description: prints all possible different combinations of two digits
 * Numbers must be separated by ',', followed by a space
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num = 0;
	int num2;

	while (num < 10)
	{
		num2 = num + 1;
		while (num2 < 10)
		{
			putchar(num + 48);
			putchar(num2 + 48);
			if (num != 8 || num2 != 9)
			{
				putchar(',');
				putchar(' ');
			}
			num2 += 1;
		}
		num += 1;
	}
	putchar('\n');
	return (0);
}
