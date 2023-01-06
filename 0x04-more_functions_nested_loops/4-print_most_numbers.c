#include "main.h"

/**
 * print_most_numbers - prints from (0 to 9), followed by a newline
 * (Do not print 2 and 4)
 */
void print_most_numbers(void)
{
	char ch;

	for (ch = '0'; ch <= '9'; ch++)
		if (ch != '2' && ch != '4')
			_putchar(ch);
	_putchar('\n');
}
