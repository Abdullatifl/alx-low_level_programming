#include "main.h"
/**
 * _print_rev_recursion - Prints a string in reverse.
 * @z: The string to be printed.
 */
void _print_rev_recursion(char *z)
{
	if (*z)
	{
		_print_rev_recursion(z + 1);
		_putchar(*z);
	}
}
