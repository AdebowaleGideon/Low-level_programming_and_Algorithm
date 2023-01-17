#include <stdlib.h>

int word_count(char *str);

/**
 * strtow - splits a string into words
 * @str: pointer to string head
 *
 * Description: returns a pointer to an array of strings (null-terminated)
 * with the last element as NULL.
 * Guide: Words are separated by spaces.
 * Return: pointer to an array of strings, or NULL (if failure)
 */
char **strtow(char *str)
{
	int i, j, c, w;
	char **strs = NULL;

	if (!str || *str == '\0')
		return (NULL);

	w = word_count(str);
	strs = malloc((w + 1) * sizeof(char *));
	if (!strs)
		return (NULL);

	for (c = w = i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == ' ')
		{
			c = 0;
			continue;
		}
		while (str[i + c] != '\0' && str[i + c] != ' ')
			c++;
		strs[w] = malloc((c + 1) * sizeof(strs));
		if (!strs[w])
		{
			for (i = 0; i < w; i++)
				free(strs[i]);
			free(strs);
			return (NULL);
		}
		for (j = 0; j < c; j++)
			strs[w][j] = str[i++];
		i--;
		strs[w++][j] = '\0';
	}
	strs[w] = NULL;
	return (strs);
}

/**
 * word_count - counts the number of words in a string
 * @str: pointer to string head
 * Separator: ' '
 * Return: number of words
 */
int word_count(char *str)
{
	int i, w, flag;

	w = flag = 0;
	for (i = 0; str[i] != '\0'; i++)
	{
		if (!flag && str[i] != ' ')
		{
			w += 1;
			flag = 1;
		}
		else if (str[i] == ' ')
			flag = 0;
	}
	return (w);
}
