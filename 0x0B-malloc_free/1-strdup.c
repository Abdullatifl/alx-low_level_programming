#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _strdup - duplicate to new memory space location
 * @str: char
 * Return: 0
 */
char *_strdup(char *str)
{
	char *aaa;
	int r, z = 0;

	if (str == NULL)
		return (NULL);
	r = 0;
	while (str[r] != '\0')
		r++;

	aaa = malloc(sizeof(char) * (r + 1));

	if (aaa == NULL)
		return (NULL);

	for (z = 0; str[z]; z++)
		aaa[z] = str[z];

	return (aaa);
}
