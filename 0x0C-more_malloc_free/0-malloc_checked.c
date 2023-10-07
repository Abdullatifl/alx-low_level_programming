
#include <stdlib.h>
#include "main.h"

/**
 * *malloc_checked - allocates memory using malloc
 * @r: number of bytes to allocate
 *
 * Return: a pointer to the allocated memory
 */
void *malloc_checked(unsigned int r)
{
	void *ptr;

	ptr = malloc(r);

	if (ptr == NULL)
		exit(98);

	return (ptr);
}
