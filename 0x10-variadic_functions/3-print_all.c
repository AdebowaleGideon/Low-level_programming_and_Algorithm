#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - prints anything
 * @format: is a list of types of arguments passed to the function
 * (c - char | i - integer | f - float | s - char * (if NULL) print (nil)
 *
 * Constraint:	for, goto, ternary operator, else, do ... while  not allowed
 *		maximum of 2 while loops &  2 if;
 *		maximum declared variable 9;
 */
void print_all(const char * const format, ...)
{
	unsigned int idx, flag = 0, i = 0;
	char *str = NULL;
	const char * const types = "cifs";
	va_list ap;

	va_start(ap, format);
	while (format && format[i])
	{
		idx = 0;
		while (types[idx])
		{
			if (format[i] == types[idx] && flag)
			{
				printf(", ");
				break;
			} idx += 1;
		}
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(ap, int)), flag = 1;
				break;
			case 'i':
				printf("%d", va_arg(ap, int)), flag = 1;
				break;
			case 'f':
				printf("%f", va_arg(ap, double)), flag = 1;
				break;
			case 's':
				str = va_arg(ap, char *), flag = 1;
				if (!str)
					str = "(nil)";
				printf("%s", str);
				break;
		} i += 1;
	}
	putchar('\n');
	va_end(ap);
}
