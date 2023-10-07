#include "main.h"
#include <stdlib.h>
#include <stdio.h>

#define ERR_MSG "Error"

/**
 * is_digit - checks if a string contains a non-digit char
 * @s: string to be evaluated
 *
 * Return: 0 if a non-digit is found, 1 otherwise
 */
int is_digit(char *s)
{
	int i = 0;

	while (s[i])
	{
		if (s[i] < '0' || s[i] > '9')
			return (0);
		i++;
	}
	return (1);
}

/**
 * _strlen - returns the length of a string
 * @s: string to evaluate
 *
 * Return: the length of the string
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

/**
 * errors - handles errors for main
 */
void errors(void)
{
	printf("Error\n");
	exit(98);
}

/**
 * main - multiplies two positive numbers
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: always 0 (Success)
 */
int main(int argc, char *argv[])
{
	char *z1, *z2;
	int len1, len2, len, r, carry, digit1, digit2, *result, a = 0;

	z1 = argv[1], z2 = argv[2];
	if (argc != 3 || !is_digit(z1) || !is_digit(z2))
		errors();
	len1 = _strlen(z1);
	len2 = _strlen(z2);
	len = len1 + len2 + 1;
	result = malloc(sizeof(int) * len);
	if (!result)
		return (1);
	for (r = 0; r <= len1 + len2; r++)
		result[r] = 0;
	for (len1 = len1 - 1; len1 >= 0; len1--)
	{
		digit1 = z1[len1] - '0';
		carry = 0;
		for (len2 = _strlen(z2) - 1; len2 >= 0; len2--)
		{
			digit2 = z2[len2] - '0';
			carry += result[len1 + len2 + 1] + (digit1 * digit2);
			result[len1 + len2 + 1] = carry % 10;
			carry /= 10;
		}
		if (carry > 0)
			result[len1 + len2 + 1] += carry;
	}
	for (r = 0; r < len - 1; r++)
	{
		if (result[r])
			a = 1;
		if (a)
			_putchar(result[r] + '0');
	}
	if (!a)
		_putchar('0');
	_putchar('\n');
	free(result);
	return (0);
}
