#include <stdio.h>
/**
 * _strlen_recursion - computes the length of string
 * @s: pointer to string head
 * Return: bytes count in string
 */
int _strlen_recursion(char *s)
{
	if (!*s)
		return (0);
	return (1 + _strlen_recursion(s + 1));
}

/**
 * palindrome_recurse - recursive function
 * @s: pointer to string
 * @l: position
 * Return: boolean
 */
int palindrome_recurse(char *s, int l)
{
	if (s >= s + l)
		return (1);
	if (*s != *(s + l))
		return (0);
	/* s move -> by 1, therefore l <- by 2 to supplement the effect */
	return (palindrome_recurse(s + 1, l - 2));
}

/**
 * is_palindrome - checks if string is palindrome
 * @s: pointer to string head
 * Return: 1 (is palindrome), 0 (is not)
 */
int is_palindrome(char *s)
{
	int len = _strlen_recursion(s);

	return (palindrome_recurse(s, len - 1));
}
