/**
 * _memcpy - copies memory area
 * @dest: destionation memory area
 * @src: source memory area
 * @n: most number of byte that should be copied from src to dest
 * Return: pointer to dest.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		*(dest + i) = *(src + i);
	return (dest);
}
