#include "main.h"

/**
 * print_number - prints an integer using the _putchar function
 * @n: integer value
 */
void print_number(int n)
{
	int n_copy, div = 1;

	if (n < 0)
	{
		_putchar('-');
		n *= -1;
	}

	n_copy = n;
	while ((n_copy /= 10) > 0)
		div *= 10;

	for (; div >= 1; div /= 10)
		_putchar((n / div) % 10 + '0');
}
