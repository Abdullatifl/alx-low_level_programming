#include "main.h"
#include <stdlib.h>
/**
 * argstostr - main entry
 * @ac: int input
 * @av: double pointer array
 * Return: 0
 */
char *argstostr(int ac, char **av)
{
	int r, b, z = 0, l = 0;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (r = 0; r < ac; r++)
	{
		for (b = 0; av[r][b]; b++)
			l++;
	}
	l += ac;

	str = malloc(sizeof(char) * l + 1);
	if (str == NULL)
		return (NULL);
	for (r = 0; r < ac; r++)
	{
	for (b = 0; av[r][b]; b++)
	{
		str[z] = av[r][b];
		z++;
	}
	if (str[z] == '\0')
	{
		str[z++] = '\n';
	}
	}
	return (str);
}
