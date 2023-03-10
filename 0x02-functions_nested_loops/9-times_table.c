#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0
 */
void times_table(void)
{
	int i, j, m;

	for (i = 0; i < 10; i++)
	{
		for (m = j = 0; j < 10; j++, m = j * i)
		{
			if (j != 0)
			{
				if (m > 9)
					_putchar((m / 10) + '0');
				else
					_putchar(' ');
			}
			_putchar((m % 10) + '0');
			if (j != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
