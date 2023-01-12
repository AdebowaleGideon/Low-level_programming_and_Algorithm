#include <stdio.h>

/**
 * _strstr - locates a substring
 * @haystack: pointer to main string
 * @needle: pointer to subset string
 *
 * Description: function finds the first occurrence of the substring needle
 * in the string haystack
 * Return: pointer to the beginning of the located substring
 * (NULL) if substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
	unsigned int i, j;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		if (haystack[i] == needle[0])
			for (j = 1; 1; j++)
			{
				if (haystack[i + j] != needle[j])
					break;
				if (needle[j + 1] == '\0')
					return (haystack + i);
			}
	}
	return (NULL);
}
