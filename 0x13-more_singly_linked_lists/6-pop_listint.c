#include "lists.h"

/**
 * pop_listint - deletes the first node of a linked list
 * @head: pointer to the first element
 * Return: the data that was deleted or 0
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int n;

	if (!head || !*head)
		return (0);

	n = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (n);
}
