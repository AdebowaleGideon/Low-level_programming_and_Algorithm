#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry Point
 * @argc: number of command line arguments
 * @argv: An array containing the program command line argruments
 *
 * Description: prints program name followed by a new line.
 * Return: Always 0 (Success)
 */
int main(int __attribute__ ((unused)) argc, char *argv[])
{
	puts(argv[0]);
	exit(EXIT_SUCCESS);
}
