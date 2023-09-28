#include "main.h"

/**
 * _pow_recursion - returns the value of h raised to the power of z
 * @h: value to raise
 * @z: power
 *
 * Return: result of the power
 */
int _pow_recursion(int h, int z)
{
	if (z < 0)
		return (-1);
	if (z == 0)
		return (1);
	return (h * _pow_recursion(h, z - 1));
}
