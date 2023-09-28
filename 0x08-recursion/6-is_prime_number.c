#include "main.h"

int actual_prime(int h, int z);
/**
 * is_prime_number - says if an integer is a prime number or not
 * @h: number to evaluate
 *
 * Return: 1 if h is a prime number, 0 if not
 */
int is_prime_number(int h)
{
	if (h <= 1)
		return (0);
	return (actual_prime(h, h - 1));
}

/**
 * actual_prime - calculates if a number is prime recursively
 * @h: number to evaluate
 * @z: iterator
 *
 * Return: 1 if h is prime, 0 if not
 */
int actual_prime(int h, int z)
{
	if (z == 1)
		return (1);
	if (h % z == 0 && z > 0)
		return (0);
	return (actual_prime(h, z - 1));
}
