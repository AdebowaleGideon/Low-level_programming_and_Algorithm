/**
 * leet - encodes a string into 1337
 * @str: pointer to string
 * Description: rep a & A - 4 | e & E - 3 | o & O - 0 | t & T - 7 | l & L - 1
 * Return: pointer to the resulting string
 */
char *leet(char *str)
{
	int i, j;
	int leet[5] = {4, 3, 0, 7, 1};
	char *ch = "aeotlAEOTL";

	for (i = 0; str[i] != '\0'; i++)
		for (j = 0; ch[j] != '\0'; j++)
		{
			if (str[i] == ch[j])
				str[i] = leet[j % 5] + '0';
		}
	return (str);
}
