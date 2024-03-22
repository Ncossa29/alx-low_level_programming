#include "lists.h"

/**
 * add_dnodeint - Adds a new node at the beginning of the list.
 * @head: A pointer to the head of the dlistint_t list.
 * @n: The integer for the new node.
 * Return: NULL or address of new node.
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
dlistint_t *new_n;

new_n = malloc(sizeof(dlistint_t));
if (new_n == NULL)
{
return (NULL);
}
new_n->n = n;
new_n->next = *head;
new_n->prev = NULL;
if (*head != NULL)
{
(*head)->prev = new_n;
}
*head = new_n;

return (new_n);
}
