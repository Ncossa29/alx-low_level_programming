#include "lists.h"
#include <stdio.h>

/**
 * print_listint - prints all the elements in a linked list
 * @h: linked list of listint_t
 * Return: number of nodes print
 */

size_t print_listint(const listint_t *h)

{
size_t nm = 0;

while (h)
{
	printf("%d\n", h->n);
	nm++;
	h = h->next;
}

return (nm);
}
