#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry Point
 * @argc: The length of command line arguments
 * @argv: an array containing the program command line arguments
 *
 * Description: multiplies two numbers
 * Return: 0 (Success), 1 (error)
 */
int main(int argc, char *argv[])
{
	int val1, val2;

	if (argc != 3)
	{
		puts("Error");
		exit(1);
	}
	val1 = atoi(argv[1]);
	val2 = atoi(argv[2]);
	printf("%d\n", val1 * val2);

	exit(0);
}
