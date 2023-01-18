#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - prints number followed by a new line
 * @separator: string to be printed between numbers
 * @n: number of integers passed to the function
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ap;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(ap, int));
		if (i != n - 1 && separator)
			printf("%s", separator);
	}
	putchar('\n');
	va_end(ap);
}
