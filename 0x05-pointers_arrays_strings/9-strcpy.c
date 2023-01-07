/**
 * _strcpy - copies the string pointed to by 'src', including the terminating
 * null byte (\0), to the buffer pointed to by 'dest'.
 * @src: pointer to content source
 * @dest: pointer to content destination
 * Return: pointer to destination
 */
char *_strcpy(char *dest, char *src)
{
	unsigned int i = 0;

	for (i = 0; src[i] != '\0'; i++)
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}
