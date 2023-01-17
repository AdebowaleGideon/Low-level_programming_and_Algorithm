#include <stdlib.h>
#include <stdio.h>

/**
 * str_concat - concatenates two strings
 * @s1: pointer to first string
 * @s2: pointer to second string
 *
 * Description: pointer should point to a newly allocated space in memory which
 * contains the contents of s1 and s2 and null terminated.
 * Return: pointer to the newly allocated memory space. NULL (if failed)
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int i, j, l;
	char *c_str = NULL;

	i = j = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2  = "";

	while (s1[i] != '\0')
		i++;
	while (s2[j] != '\0')
		j++;

	c_str = malloc(sizeof(char) * (i + j + 1));
	if (c_str == NULL)
		return (NULL);

	for (l = 0; l < i; l++)
		c_str[l] = s1[l];
	for (l = 0; l < j; l++)
		c_str[l + i] = s2[l];
	c_str[i + j] = '\0';

	return (c_str);
}
