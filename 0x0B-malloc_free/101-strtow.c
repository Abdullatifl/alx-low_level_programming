#include <stdlib.h>
#include "main.h"

/**
 * count_word - helper function to count the number of words in a string
 * @z: string to evaluate
 *
 * Return: number of words
 */
int count_word(char *z)
{
	int flag, r, i;

	flag = 0;
	i = 0;

	for (r = 0; z[r] != '\0'; r++)
	{
		if (z[r] == ' ')
			flag = 0;
		else if (flag == 0)
		{
			flag = 1;
			i++;
		}
	}

	return (i);
}
/**
 * **strtow - splits a string into words
 * @str: string to split
 *
 * Return: pointer to an array of strings (Success)
 * or NULL (Error)
 */
char **strtow(char *str)
{
	char **matrix, *tmp;
	int t, b = 0, len = 0, words, r = 0, start, end;

	while (*(str + len))
		len++;
	words = count_word(str);
	if (words == 0)
		return (NULL);

	matrix = (char **) malloc(sizeof(char *) * (words + 1));
	if (matrix == NULL)
		return (NULL);

	for (t = 0; t <= len; t++)
	{
		if (str[t] == ' ' || str[t] == '\0')
		{
			if (r)
			{
				end = t;
				tmp = (char *) malloc(sizeof(char) * (r + 1));
				if (tmp == NULL)
					return (NULL);
				while (start < end)
					*tmp++ = str[start++];
				*tmp = '\0';
				matrix[b] = tmp - r;
				b++;
				r = 0;
			}
		}
		else if (r++ == 0)
			start = t;
	}

	matrix[b] = NULL;

	return (matrix);
}
