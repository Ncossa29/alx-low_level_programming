#include "lists.h"

/**
 * print_dlistint - Prints all the elements of a doubly list.
 * @h: The head.
 * Return: Node count.
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t p = 0;
	const dlistint_t *tmp = h;

	while (tmp != NULL)
	{
		printf("%d\n", tmp->n);
		tmp = tmp->next;
		p++;
	}
	return (p);
}
