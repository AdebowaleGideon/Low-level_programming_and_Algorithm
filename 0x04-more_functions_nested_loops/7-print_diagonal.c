#include "main.h"

/**
 * print_diagonal - draw a diagonal line on the terminal
 * @n: diagonal size
 */
void print_diagonal(int n)
{
	int i, count = 0;

	if (n <= 0)
		_putchar('\n');

	while (count++ < n)
	{
		for (i = 1; i < count; i++)
			_putchar(' ');
		_putchar('\\');
		_putchar('\n');
	}
}
