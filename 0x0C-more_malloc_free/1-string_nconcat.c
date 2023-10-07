#include <stdlib.h>
#include "main.h"

/**
 * *string_nconcat - concatenates n bytes of a string to another string
 * @z1: string to append to
 * @z2: string to concatenate from
 * @r: number of bytes from z2 to concatenate to z1
 *
 * Return: pointer to the resulting string
 */
char *string_nconcat(char *z1, char *z2, unsigned int r)
{
	char *z;
	unsigned int b = 0, t = 0, len1 = 0, len2 = 0;

	while (z1 && z1[len1])
		len1++;
	while (z2 && z2[len2])
		len2++;

	if (r < len2)
		z = malloc(sizeof(char) * (len1 + r + 1));
	else
		z = malloc(sizeof(char) * (len1 + len2 + 1));

	if (!z)
		return (NULL);

	while (b < len1)
	{
		z[b] = z1[b];
		b++;
	}

	while (r < len2 && b < (len1 + r))
		z[b++] = z2[t++];

	while (r >= len2 && b < (len1 + len2))
		z[b++] = z2[t++];

	z[b] = '\0';

	return (z);
}
