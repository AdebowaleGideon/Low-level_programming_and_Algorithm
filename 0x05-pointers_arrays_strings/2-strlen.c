/**
 * _strlen - returns the length of a string
 * @s: pointer to string head
 * Return: the number of bytes in the string pointed to by s
 */
int _strlen(char *s)
{
	int l = 0;

	while (s[l] != '\0')
		l++;
	return (l);
}
