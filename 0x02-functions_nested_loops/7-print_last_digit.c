#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @n: integer value
 * Return: last digit of @n
 */
int print_last_digit(int n)
{
	n = (n < 0 ? n * -1 : n);
	_putchar((n % 10) + '0');
	return (n % 10);
}
