#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node - adds a new node
 * @str: new string to add
 * @head: double pointer to the list_t list
 * Return: the address of the new element, or NULL if it fails
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	unsigned int leg = 0;

	while (str[leg])
		leg++;

	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);

	new->str = strdup(str);
	new->leg = leg;
	new->next = (*head);
	(*head) = new;

	return (*head);
}
