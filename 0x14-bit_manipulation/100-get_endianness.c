#include "main.h"

/**
 * get_endianness - prog checks the endianness
 *
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	int r;
	char *b;

	r = 1;
	b = (char *)&r;
	return (*b);
}
