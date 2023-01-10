/**
 * rot13 - encodes a string using 'rot13'
 * @str: pointer to string head
 * Return: pointer to resulting string
 */
char *rot13(char *str)
{
	int i, j;
	char *rot13 = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
	char *ch = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";

	for (i = 0; str[i] != '\0'; i++)
		for (j = 0; ch[j] != '\0'; j++)
			if (str[i] == ch[j])
			{
				str[i] = rot13[j];
				break;
			}
	return (str);
}
