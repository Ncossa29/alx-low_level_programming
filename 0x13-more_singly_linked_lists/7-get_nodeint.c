#include "lists.h"

/**
 * get_nodeint_at_index - returns the node at an index
 * @head: first node
 * @index: index of said node
 * Return: pointer to the node or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int h = 0;
	listint_t *temp = head;

	while (temp && h < index)
	{
		temp = temp->next;
		h++;
	}

	return (temp ? temp : NULL);
}
