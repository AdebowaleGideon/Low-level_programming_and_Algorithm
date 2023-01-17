#include <stdio.h>
#include <stdlib.h>

int _isdigit(char c);

/**
 * main - Entry Point
 * @argc: The number of command line arguments
 * @argv: An array containing the program command line arguments
 *
 * Description: adds positive numbers
 * Return: 0 (Success), 1 (Error)
 */
int main(int argc, char *argv[])
{
	int i, j, sum = 0;

	for (i = 1; i < argc; i++)
	{
		/* check if all element isdigit */
		for (j = 0; argv[i][j] != '\0'; j++)
			if (!_isdigit(argv[i][j]))
			{
				puts("Error");
				return (1);
			}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}

/**
 * _isdigit - checks for a digit (0 through 9)
 * @c: value to check
 * Return: 1 (is digit), 0 (otherwise)
 */
int _isdigit(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}
