/**
 * _strcat - concatenate two strings
 * @dest: pointer to destination string
 * @src: pointer to source string
 *
 * Description: appends the src string to the dest string, overwriting the
 * (\0) at the end of dest, and then adds a terminating null byte
 * Return: pointer to the resulting string 'dest'
 */
char *_strcat(char *dest, char *src)
{
	int i, j;

	i = j = 0;
	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0')
		dest[i++] = src[j++];
	dest[i] = '\0';

	return (dest);
}
