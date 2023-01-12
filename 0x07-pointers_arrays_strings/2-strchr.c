#include <stdio.h>

/**
 * _strchr - locates a character in a string
 * @s: pointer to string head
 * @c: character sought in 's'
 * Return: pointer to the first occurence of character c in s, else (NULL)
 */
char *_strchr(char *s, char c)
{
	while (*(s++) != '\0')
		if (*s == c)
			return (s);
	return (NULL);
}
