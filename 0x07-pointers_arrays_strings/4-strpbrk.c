#include <stdio.h>

/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: pointer to string head
 * @accept: pointer t accepted characters
 *
 * Description: function locates the first occurence in the string s of any
 * bytes in the string accept
 * Return: pointer to the byte in s that matches one of the bytes in accept
 * (NULL) if no such byte is found.
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
			if (s[i] == accept[j])
				return (s + i);
	}
	return (NULL);
}
