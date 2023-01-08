#include <stdio.h>
/**
 * _atoi - converts a string to an integer
 * @s: pointer to string head
 * Return: result of the convertion (Success), 0 (if no numbers in the string)
 */
int _atoi(char *s)
{
	/*
	 * check each character (ch)
	 * while the ch is not int loop
	 *	if '-' ; mul sign by -1
	 * once int, store 'I * 10 + ch' > I' init I = 0;
	 * if ch is not int break and return I
	 */
	int i, I, flag, sign;

	i = I = flag = 0;
	sign = 1;

	while (s[i] != '\0')
	{
		while (s[i] != '\0' && flag == 0)
		{
			if (s[i] >= '0' && s[i] <= '9')
			{
				flag = 1;
				break;
			}
			if (s[i] == '-')
				sign *= -1;
			i++;
		}

		if (s[i] < '0' || s[i] > '9')
			break;
		I = (I * 10) + (s[i] - '0');
		i++;
	}
	return (sign * I);
}
