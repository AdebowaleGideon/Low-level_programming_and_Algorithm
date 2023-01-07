#include "main.h"

/**
 * print_rev - prints a string, in reverse, followed by a new line
 * @s: pointer to string head
 */
void print_rev(char *s)
{
	int l;

	while (s[l] != '\0')
		l++;
	l--;
	while (l >= 0)
		_putchar(s[l--]);
	_putchar('\n');
}
