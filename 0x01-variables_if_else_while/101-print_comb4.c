#include <stdio.h>

/**
 * main - Entry Point
 *
 * Description: prints all possible different combination of three digits
 * Numbers must be separated by ',', followed by space, only putchar is allowed
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num = 0;
	int num2, num3;

	while (num < 10)
	{
		num2 = num + 1;
		while (num2 < 10)
		{
			num3 = num2 + 1;
			while (num3 < 10)
			{
				putchar(num + 48);
				putchar(num2 + 48);
				putchar(num3 + 48);
				if (num != 7 || num2 != 8 || num3 != 9)
				{
					putchar(',');
					putchar(' ');
				}
				num3 += 1;
			}
			num2 += 1;
		}
		num += 1;
	}
	putchar('\n');
	return (0);
}
