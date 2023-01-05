#include "main.h"

/**
 * _islower - checks for lowercase character
 * @c: integer value of the character
 * Return: 1 (character is lower), 0 (otherwise)
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	return (0);
}
