#include <stdio.h>

/**
 * main - Entry Point
 *
 * Description: prints all single digit numbers of base 10 starting from 0,
 * followed by a new line (using type char is forbidden)
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i = 0;

	while (i < 10)
	{
		putchar(i + 48);
		i += 1;
	}
	putchar('\n');
	return (0);
}
