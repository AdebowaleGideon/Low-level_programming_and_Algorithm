#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory, which
 * contains a copy of the string given as a parameter
 * @str: string to duplicate
 * Return: pointer to the duplicated string, NULL (failure)
 */
char *_strdup(char *str)
{
	char *dup = NULL;
	int l = 0;

	if (str != NULL)
	{
		while (str[l])
			l++;
		dup = (char *)malloc(sizeof(*dup) * l + 1);
	}
	if (dup == NULL)
		return (NULL);

	for (l = 0; str[l] != '\0'; l++)
		dup[l] = str[l];
	dup[l] = '\0';
	return (dup);
}
