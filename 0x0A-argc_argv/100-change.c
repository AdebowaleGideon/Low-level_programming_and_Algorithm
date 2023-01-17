#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry Point
 * @argc: the number of command line arguments
 * @argv: an array containing the program command line arguments
 * Description: prints the minimum number of coins to make change for an
 * amount of money
 * Return: 0 (Success), 1 (Error)
 */
int main(int argc, char *argv[])
{
	int coins[5] = {25, 10, 5, 2, 1};
	int i, cents, ncoin;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);
	i = ncoin = 0;

	while (i < 5)
	{
		if (cents >= coins[i])
		{
			cents -= coins[i];
			ncoin += 1;
		}
		else
			i++;
	}
	printf("%d\n", ncoin);
	return (0);
}
