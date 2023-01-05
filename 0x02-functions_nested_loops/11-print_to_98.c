#include <stdio.h>

/**
 * print_to_98 - prints all natural numbers from n to 98, followed by a newline
 * (using the standard library is allowed)
 * @n: starting point - Integer
 */
void print_to_98(int n)
{
	short flag = 0;

	if (n < 98)
		flag = 1;

	if (flag)
		for (; n < 98; n++)
			printf("%d, ", n);
	else
		for (; n > 98; n--)
			printf("%d, ", n);
	printf("%d\n", 98);
}
