#include "main.h"
/**
 * _puts_recursion - function like puts();
 * @z: input
 * Return: Always 0 (Success)
 */
void _puts_recursion(char *z)
{
	if (*z)
	{
		_putchar(*z);
		_puts_recursion(z + 1);
	}

	else
		_putchar('\n');
}
