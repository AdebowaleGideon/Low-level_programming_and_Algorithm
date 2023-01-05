#include "main.h"

/**
 * _isalpha - checks for alphabetic character
 * @c: integer value of the character
 * Return: 1 (if lowercase or uppercase), 0 (otherwise)
 */
int _isalpha(int c)
{
	if (c >= 'A' && c <= 'z')
		if (c <= 'Z' || c >= 'a')
			return (1);
	return (0);
}
