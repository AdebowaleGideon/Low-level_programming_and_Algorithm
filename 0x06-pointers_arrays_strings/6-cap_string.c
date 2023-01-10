/**
 * cap_string - capitalizes all words of a string
 * @str: pointer to string head
 * Return: pointer to resulting string
 */
char *cap_string(char *str)
{
	int i, j, flag;
	char *sep = " \t\n,;.!?\"(){}";

	flag = 1;
	for (i = 0; str[i] != '\0'; i++)
	{
		if (flag)
		{
			if (str[i] >= 'a' && str[i] <= 'z')
				str[i++] -= 32;
			flag = 0;
		}
		for (j = 0; sep[j] != '\0'; j++)
			if (str[i] == sep[j])
				flag = 1;
	}
	return (str);
}
