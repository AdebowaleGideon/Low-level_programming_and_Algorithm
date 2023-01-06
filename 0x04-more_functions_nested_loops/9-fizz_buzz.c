#include <stdio.h>

/**
 * main - Entry Point
 *
 * Description: prints the number from 1 - 100, followed by a new line. But for
 * multiples of three print "Fizz" instead of the number, for multiples of five
 * print "Buzz", for numbers which are multiple of both print "FizzBuzz"
 * Return: Always 0 (Success)
 */
int main(void)
{
	short i;

	printf("1");
	for (i = 2; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
			printf(" FizzBuzz");
		else if (i % 3 == 0)
			printf(" Fizz");
		else if (i % 5 == 0)
			printf(" Buzz");
		else
			printf(" %u", i);
	}
	printf("\n");
	return (0);
}
