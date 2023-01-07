/**
 * rev_string - reverse a string
 * @s: pointer to string head
 */
void rev_string(char *s)
{
	unsigned int i, l = 0;
	char tmp;

	while (s[l] != '\0')
		l++;

	l--;
	for (i = 0; i <= l; i++, l--)
	{
		tmp = s[i];
		s[i] = s[l];
		s[l] = tmp;
	}
}
