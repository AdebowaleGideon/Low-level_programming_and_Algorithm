#include "main.h"

/**
 * print_line - draws a straight in the terminal
 * @n: length of line
 */
void print_line(int n)
{
	while (n-- > 0)
		_putchar('_');
	_putchar('\n');
}
