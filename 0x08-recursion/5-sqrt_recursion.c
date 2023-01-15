int _sqrt(int n, int i);

/**
 * _sqrt_recursion - returns the natural sqare root of a number.
 * @n: perfect square integer
 * Return: root a integer value base on _sqrt function
 */
int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	return (_sqrt(n, 1));
}

/**
 * _sqrt - compute the square root of a value
 * @n: integer number
 * @i: corrent test root value
 * Return: root of a perfect sqaure integer, -1 (otherwise)
 */
int _sqrt(int n, int i)
{
	if (n < 0 || (i * i) > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (_sqrt(n, i + 1));
}
