#include "main.h"

/**
 * more_numbers - prints 10 times the number, 0 - 14, followed by a newline
 */
void more_numbers(void)
{
	short count, i;

	while (count++ < 10)
	{
		for (i = 0; i < 15; i++)
		{
			if (i > 9)
				_putchar((i / 10) + '0');
			_putchar((i % 10) + '0');
		}
		_putchar('\n');
	}
}
