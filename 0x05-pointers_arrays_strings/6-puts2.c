#include "main.h"

/**
 * puts2 - prints every other character of a string with the first character
 * followed by a new line.
 * @str: pointer to string head
 */
void puts2(char *str)
{
	unsigned int i;

	for (i = 0; str[i] != '\0'; i += 2)
		_putchar(str[i]);
	_putchar('\n');
}
