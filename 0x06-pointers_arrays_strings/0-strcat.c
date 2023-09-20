#include "main.h"
/**
 * _strcat - concatenates two strings
 * @dest: input value
 * @src: input value
 *
 * Return: void
 */
char *_strcat(char *dest, char *src)
{
	int z;
	int j;

	z = 0;
	while (dest[z] != '\0')
	{
		i++;
	}
	j = 0;
	while (src[j] != '\0')
	{
		dest[z] = src[j];
		i++;
		j++;
	}

	dest[z] = '\0';
	return (dest);
}
