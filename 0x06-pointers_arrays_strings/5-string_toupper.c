/**
 * string_toupper - changes all lowercase letters of a string to uppercase
 * @str: pointer to string head
 * Return: pointer to resulting string
 */
char *string_toupper(char *str)
{
	unsigned int i;

	for (i = 0; str[i] != '\0'; i++)
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;
	return (str);
}
