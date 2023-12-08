#include "lists.h"

/**
 * print_dlistint - prints all the elements of a
 * dlistint_t list
 *
 * @h: head of the list
 * Return: the number of nodes
 */
size_t print_dlistint(const dlistint_t *b)
{
	int count;

	count = 0;

	if (b == NULL)
		return (count);

	while (b->prev != NULL)
		b = b->prev;

	while (b != NULL)
	{
		printf("%d\n", b->n);
		count++;
		b = b->next;
	}

	return (count);
}
