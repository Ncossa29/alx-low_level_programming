#include "lists.h"
/**
 * get_dnodeint_at_index - Outputs adex of doubly linked list
 * @head: pointer to the list
 * @index: index of the node
 * Return: NULL or Address of node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
dlistint_t *m;
unsigned int i;

m = head;
i = 0;
if (head == NULL)
return (NULL);
while (m != NULL)
{
if (i == index)
return (m);
m = m->next;
i++;
}
return (NULL);
}
