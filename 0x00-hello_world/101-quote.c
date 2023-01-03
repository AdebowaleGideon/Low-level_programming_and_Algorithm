#include <unistd.h>

/**
 * main - Entry Point
 *
 * Description: prints to standard error
 * 'and that piece of art is useful" - Dora Korpar, 2015-10-19\n'
 * Return: 1 (Standard error exit code)
 */
int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar 2015-10-19\n", 59);
	return (1);
}
