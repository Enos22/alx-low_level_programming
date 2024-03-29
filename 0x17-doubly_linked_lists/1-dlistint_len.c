#include "lists.h"

/**
 * dlistint_len - function that returns the number of elements
 * @h: linked list head
 *
 * Return: the number of elements in the list
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		h = h->next;
	}

	return (nodes);
}
