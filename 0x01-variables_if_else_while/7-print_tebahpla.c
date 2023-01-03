#include <stdio.h>

/**
 * main - Entry Point
 *
 * Description: prints the lowercase alphabet in reverse,
 * followed by a new line (only use the putchar function)
 * Return: Always 0 (Success)
 */
int main(void)
{
	char ch = 'z';

	while (ch >= 'a')
		putchar(ch--);
	putchar('\n');
	return (0);
}
