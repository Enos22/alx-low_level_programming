#include "lists.h"
#include <stdio.h>

/**
 * print_dlistint - prints elements all elements of the list
 * @h: pointer to the list
 *
 * Return: number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t nodes = 0;

	while (h != NULL)
	{
		nodes++;
		printf("%d\n", h->n);
		h = h->next;
	}

	return (nodes);
}
