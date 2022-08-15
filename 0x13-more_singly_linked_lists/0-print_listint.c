#include "lists.h"

/**
 * print_listint - prints all elements of a list
 * @h: list
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t num_nodes = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n); /* autofills 0 if no int value given */
		h = h->next;
		num_nodes += 1;
	}

	return (num_nodes);
}
