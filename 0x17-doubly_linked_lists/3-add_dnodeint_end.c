#include "lists.h"

/**
 * add_dnodeint_end - Adds a new node at the end.
 * @head: The head.
 * @n: The new node.
 * Return: NULL or address of new node.
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
dlistint_t *new;
dlistint_t *m;

new = malloc(sizeof(dlistint_t));
if (new == NULL)
{
return (NULL);
}
new->n = n;
new->next = NULL;
new->prev = NULL;
if (*head == NULL)
{
*head = new;
return (new);
}
m = *head;
while (m->next != NULL)
{
m = m->next;
}
m->next = new;
new->prev = m;
return (new);
}
