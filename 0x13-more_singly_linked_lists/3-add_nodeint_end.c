#include "lists.h"

/**
 * add_nodeint_end - adds a node at the end
 * @head: pointer to node
 * @n: data added to node
 * Return: pointer to the new node, or NULL
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newn;
	listint_t *temp = *head;

	newn = malloc(sizeof(listint_t));
	if (!newn)
		return (NULL);

	newn->n = n;
	newn->next = NULL;

	if (*head == NULL)
	{
		*head = newn;
		return (newn);
	}

	while (temp->next)
		temp = temp->next;

	temp->next = newn;

	return (newn);
}
