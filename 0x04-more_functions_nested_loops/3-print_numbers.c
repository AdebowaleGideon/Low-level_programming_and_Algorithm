#include "main.h"

/**
 * print_numbers - prints the numbers from 0 to 9, followed by a newline
 */
void print_numbers(void)
{
	short i;

	for (i = 0; i < 10; i++)
		_putchar(i + '0');
	_putchar('\n');
}
