#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments of the program (Each argument
 * should be followed by a '\n' in the new string
 * @ac: number of command line arguments
 * @av: an array containing the program command line arguments.
 *
 * Return: pointer to a new string, or NULL (if failed)
 */
char *argstostr(int ac, char **av)
{
	int i, j;
	char *c_str = NULL;
	unsigned int c = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	/**
	 * create a counter variable
	 * for every argument count the character
	 * create a new memory space in the heap based on that count
	 * loop through argument and on each copy content to new memory space
	 * return pointer to the new concatenated string
	 */
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			;
		c += j + 1; /* for new line */
	}
	c_str = malloc((c + 1) * sizeof(*c_str));
	if (!c_str)
		return (NULL);

	for (c = i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			c_str[c++] = av[i][j];
		c_str[c++] = '\n';
	}
	c_str[c] = '\0';
	return (c_str);
}
