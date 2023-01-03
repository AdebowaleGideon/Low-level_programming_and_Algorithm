#include <stdio.h>

/**
 * main - Entry Point
 *
 * Description: prints all single digit number of base 10 starting from 0,
 * followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	char i = '0';

	while (i <= '9')
		putchar(i++);
	putchar('\n');
	return (0);
}
