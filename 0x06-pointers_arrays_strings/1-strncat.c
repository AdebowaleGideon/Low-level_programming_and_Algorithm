/**
 * _strncat - concatenates two strings
 * @dest: pointer to destination string
 * @src: pointer to source string
 * @n: most number of byte from src to append to dest
 * Return: pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = j = 0;
	while (dest[i] != '\0')
		i++;


	for (j = 0; j < n && src[j] != '\0'; i++, j++)
		dest[i] = src[j];
	dest[i] = '\0';

	return (dest);
}
