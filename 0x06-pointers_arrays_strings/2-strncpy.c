/**
 * _strncpy - copies a string
 * @dest: pointer to destination string
 * @src: pointer to source string
 * @n: most number of byte to copy from src
 *
 * Description: copies string pointed to by src to dest. If the length of src
 * is less than n, strncpy write additional null bytes to dest to ensure that
 * a total of n bytes are written.
 *
 * Return: pointer to the destination string 'dest'
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] !=  '\0'; i++)
		dest[i] = src[i];
	for ( ; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
