#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry Point
 * @argc: number of command line arguments
 * @argv: An array containing the program command line argruments
 *
 * Description: prints the number of arguments passed into it.
 * Return: Always 0 (Success)
 */
int main(int argc, char __attribute__ ((unused)) *argv[])
{
	printf("%d\n", argc - 1);
	exit(EXIT_SUCCESS);
}
