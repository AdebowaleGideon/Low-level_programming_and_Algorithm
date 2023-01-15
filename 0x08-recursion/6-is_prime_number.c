#include <stdio.h>

int prime_recurse(int n, int sqrt, int i);
int _sqrt(int n, int i);

/**
 * is_prime_number - checks if the input integer is a prime number
 * @n: integer value
 * Return: 1 (if is prime), 0 (otherwise)
 */
int is_prime_number(int n)
{
	int sqrt = _sqrt(n, 1);

	if (n < 2 || sqrt == -1)
		return (0);
	return (prime_recurse(n, sqrt, 2));
}

/**
 * prime_recurse - checks if input integer is a prime number
 * @n: integer to check
 * @sqrt: square root of n
 * @i: counter
 * Return: 1 (if is prime), 0 (otherwise)
 */

int prime_recurse(int n, int sqrt, int i)
{
	if (i > sqrt)
		return (1);
	if (n % i == 0)
		return (0);
	return (prime_recurse(n, sqrt, i + 1));
}

/**
 * _sqrt - compute the relative square root of a value
 * @n: integer number
 * @i: corrent test root value
 * Return: relative root of an integer, -1 (otherwise)
 */
int _sqrt(int n, int i)
{
	if (n < 0)
		return (-1);
	if (i * i >= n)
		return (i);
	return (_sqrt(n, i + 1));
}
