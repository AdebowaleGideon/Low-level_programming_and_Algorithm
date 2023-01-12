/**
 * _strspn - gets the length of a prefix substring
 * @s: pointer to string head
 * @accept: pointer to accepted characters
 *
 * Description: function calculates the length (in bytes) of the intial segment
 * of s which consists entirely of bytes in accept
 *
 * Return: the number of bytes in the initial segment of 's' which consist of
 * only of bytes from accept.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, max_b = 0;

	for (i = 0; accept[i] != '\0'; i++)
	{
		j = 0;
		while (1)
		{
			if (s[j] == accept[i])
			{
				if (j > max_b)
					max_b = j;
				break;
			}
			if (s[j] == '\0')
				return (0);
			j += 1;
		}
	}
	return (max_b + 1);
}
