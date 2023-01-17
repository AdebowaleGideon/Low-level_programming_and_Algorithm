#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry Point
 * @argc: number of command line arguments
 * @argv: An array containing the program command line argruments
 *
 * Description: prints all arguments it receives including the program name.
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	while (argc--)
		printf("%s\n", *argv++);
	exit(EXIT_SUCCESS);
}
