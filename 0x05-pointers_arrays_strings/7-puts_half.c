#include "main.h"

/**
 * puts_half - prints the second half of a string, followed by a new line
 * @str: pointer to string head
 */
void puts_half(char *str)
{
	unsigned int n, l = 0;

	while (str[l] != '\0')
		l++;

	if (l % 2 == 0)
		n = (l - 1) / 2;
	else
		n = l / 2;

	l--;
	while (n++ < l)
		_putchar(str[n]);
	_putchar('\n');
}
