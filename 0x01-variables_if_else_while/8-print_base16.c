#include <stdio.h>

/**
 * main - Entry Point
 *
 * Description: prints all the numbers of base 16 in lowercase,
 * followed by a new line.
 * Return: Always 0 (Success)
 */
int main(void)
{
	char ch = '0';

	while ((ch - 1) != 'f')
	{
		putchar(ch);
		if (ch == '9')
		{
			ch = 'a';
			continue;
		}
		ch += 1;
	}
	putchar('\n');
	return (0);
}
