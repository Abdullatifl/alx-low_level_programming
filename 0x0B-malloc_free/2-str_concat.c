#include "main.h"
#include <stdlib.h>
/**
 * str_concat - get ends of input and add together for size
 * @z1: input one to concat
 * @z2: input two to concat
 * Return: concat of s1 and s2
 */
char *str_concat(char *z1, char *z2)
{
	char *conct;
	int r, cr;

	if (z1 == NULL)
		z1 = "";
	if (z2 == NULL)
		z2 = "";

	r = cr = 0;
	while (z1[r] != '\0')
		r++;
	while (z2[cr] != '\0')
		cr++;
	conct = malloc(sizeof(char) * (r + cr + 1));

	if (conct == NULL)
		return (NULL);
	r = cr = 0;
	while (z1[r] != '\0')
	{
		conct[r] = z1[r];
		r++;
	}

	while (z2[cr] != '\0')
	{
		conct[r] = z2[cr];
		r++, cr++;
	}
	conct[r] = '\0';
	return (conct);
}
