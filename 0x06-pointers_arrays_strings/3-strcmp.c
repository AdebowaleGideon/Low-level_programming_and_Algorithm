/**
 * _strcmp - compares two strings
 * @s1: pointer to first string head
 * @s2: pointer to second string head
 *
 * Return: 0 (s1 = s2), +ve (s1 > s2), -ve (s1 < s2)
 */
int _strcmp(char *s1, char *s2)
{
	int i, diff;

	for (i = 0; s1[i] != '\0' || s2[i] != '\0'; i++)
	{
		diff = s1[i] - s2[i];
		if (diff)
			return (diff);
	}
	return (0);
}
