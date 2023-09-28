#include "main.h"
/**
 * _strlen_recursion - Returns the length of a string.
 * @h: The string to be measured.
 *
 * Return: The length of the string.
 */
int _strlen_recursion(char *h)
{
	int longit = 0;

	if (*h)
	{
		longit++;
		longit += _strlen_recursion(h + 1);
	}

	return (longit);
}
