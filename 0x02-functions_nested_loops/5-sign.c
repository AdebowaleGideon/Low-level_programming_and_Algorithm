#include "main.h"

/**
 * print_sign - prints the sign of a number
 * @n: number in check
 *
 * Return: 0 (n is 0), 1 (n is +ve), -1 (n is -ve)
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
