#include <stdio.h>

/**
 * main - Entry Point
 *
 * Description: prints the alphabet in lowercase, followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		if (ch == 'e' || ch == 'q')
		{
			ch += 1;
			continue;
		}
		putchar(ch++);
	}
	putchar('\n');
	return (0);
}
