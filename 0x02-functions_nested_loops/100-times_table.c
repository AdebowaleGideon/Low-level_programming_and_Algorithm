#include "main.h"

/**
 * print_times_table - prints the 9 times table, starting with 0
 * @n: 'n' times - Integer
 */
void print_times_table(int n)
{
	int i, j, m;

	if (n > 15 || n < 0)
		return;

	for (i = 0; i <= n; i++)
	{
		for (m = j = 0; j <= n; j++, m = j * i)
		{
			if (j != 0)
			{
				if (m > 99)
					_putchar((m / 100) + '0');
				else
					_putchar(' ');
				if (m > 9)
					_putchar(((m / 10) % 10) + '0');
				else
					_putchar(' ');
			}
			_putchar((m % 10) + '0');
			if (j != n)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
