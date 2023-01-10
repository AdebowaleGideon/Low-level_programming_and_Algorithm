#include <stdio.h>

/**
 * infinite_add - adds two numbers
 * @r: the buffer that the function will use to store the result
 * @size_r: buffer size
 * @n1: pointer to first number head
 * @n2: pointer to second number head
 * Return: pointer to the result
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i, j, val, rem, l1, l2, max;

	rem = l1 = l2 = 0;
	while (n1[l1] != '\0')
		l1++;
	while (n2[l2] != '\0')
		l2++;
	max = l2 > l1 ? l2 : l1;

	if (max >= size_r)
		return (0);

	for (i = max - 1; i >= 0; i--)
	{
		val = rem;
		rem = 0;
		if (l1 > 0)
			val += n1[--l1] - '0';
		if (l2 > 0)
			val += n2[--l2] - '0';
		if (val > 9)
		{
			rem = 1;
			val %= 10;
		}
		r[i] = val + '0';
		if (!i && rem)
		{
			if (max + 1 < size_r)
				for (j = max - 1; j >= 0; j--)
					r[j + 1] = r[j];
			else
				return (0);
			r[i] = '1';
		}
	}
	return (r);
}
