#include <stdio.h>

/**
 * main - Entry Point
 *
 * Description: prints the alphabet in lowercase, then in upper case,
 * followed by a new line.
 * Return: Always 0 (Success)
 */
int main(void)
{
	char ch = 'a';

	while ((ch - 1) != 'Z')
	{
		putchar(ch);
		if (ch == 'z')
		{
			ch = 'A';
			continue;
		}
		ch += 1;
	}
	putchar('\n');
	return (0);
}
