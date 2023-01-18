#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: pointer to first string
 * @s2: pointer to second string
 * @n: most byte from s2 to concat to s1
 *
 * Return: pointer to a newly allocated space in memory, which contain s1,
 * followed by first n bytes of s2, and null terminated
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j;
	char *c_str = NULL;

	while (s1[i])
		i++;

	c_str = malloc(sizeof(*c_str) * (i + n + 1));
	if (!c_str)
		return (NULL);
	for (i = 0; s1[i]; i++)
		c_str[i] = s1[i];
	for (j = 0; j < n && s2[j]; j++)
		c_str[i + j] = s2[j];
	c_str[i + j] = '\0';

	return (c_str);
}
