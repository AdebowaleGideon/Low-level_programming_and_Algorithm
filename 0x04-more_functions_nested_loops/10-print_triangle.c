#include "main.h"

/**
 * print_triangle - prints a triangle, followed by a new line
 * @size: size of triangle
 */
void print_triangle(int size)
{
	int i, count = size;

	if (size <= 0)
		_putchar('\n');

	while (count-- > 0)
	{
		for (i = 0; i < size; i++)
		{
			if (i >= count)
				_putchar('#');
			else
				_putchar(' ');
		}
		_putchar('\n');
	}
}
