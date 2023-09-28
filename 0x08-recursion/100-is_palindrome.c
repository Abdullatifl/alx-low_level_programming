#include "main.h"

int check_pal(char *h, int z, int len);
int _strlen_recursion(char *h);

/**
 * is_palindrome - checks if a string is a palindrome
 * @h: string to reverse
 *
 * Return: 1 if it is, 0 it's not
 */
int is_palindrome(char *h)
{
	if (*h == 0)
		return (1);
	return (check_pal(h, 0, _strlen_recursion(h)));
}

/**
 * _strlen_recursion - returns the length of a string
 * @h: string to calculate the length of
 *
 * Return: length of the string
 */
int _strlen_recursion(char *h)
{
	if (*h == '\0')
		return (0);
	return (1 + _strlen_recursion(h + 1));
}

/**
 * check_pal - checks the characters recursively for palindrome
 * @h: string to check
 * @z: iterator
 * @len: length of the string
 *
 * Return: 1 if palindrome, 0 if not
 */
int check_pal(char *h, int z, int len)
{
	if (*(h + z) != *(h + len - 1))
		return (0);
	if (z >= len)
		return (1);
	return (check_pal(h, z + 1, len - 1));
}
