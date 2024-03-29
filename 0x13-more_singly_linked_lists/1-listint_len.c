#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked lists
 * @h: linked list to be checked
 * Return:the number of nodes
 */

size_t listint_len(const listint_t *h)
{
	size_t nd = 0;

	while (h)
	{
	nd++;
	h = h->next;
	}

	return (nd);
}
