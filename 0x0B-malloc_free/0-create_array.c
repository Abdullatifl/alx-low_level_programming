#include "main.h"
#include <stdlib.h>
/**
 * create_array - create array of size size and assign char r
 * @size: size of array
 * @r: char to assign
 * Description: create array of size size and assign char r
 * Return: pointer to array, NULL if fail
 *
 */
char *create_array(unsigned int size, char r)
{
	char *str;
	unsigned int z;

	str = malloc(sizeof(char) * size);
	if (size == 0 || str == NULL)
		return (NULL);

	for (z = 0; z < size; z++)
		str[z] = r;
	return (str);
}
