/**
 * _isdigit - checks for a digit (0 through 9)
 * @c: value to check
 * Return: 1 (is digit), 0 (otherwise)
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}
