#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry Point
 *
 * Description: print the last digit of the number stored in the variable n
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("Last digit of %i ", n);
	if (n % 10 == 0)
		printf("is 0 and is 0\n");
	else if (n > 0 && n % 10 > 5)
		printf("is %i and is greater than 5\n", n % 10);
	else if (n > 0 && n % 10 < 6)
		printf("is %i and is less than 6 and not 0\n", n % 10);
	else
		printf("is %i and is less than 6 and not 0\n", ((n * -1) % 10) * -1);

	return (0);
}
