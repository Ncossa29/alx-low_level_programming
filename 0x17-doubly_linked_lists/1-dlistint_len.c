#include "lists.h"

/**
 * dlistint_len - outputs the length of  dlistint_t list.
 * @h: The head.
 * Description: outputs the number of elements in a dlistint_t
 * Return: The number of elements in the list.
*/

size_t dlistint_len(const dlistint_t *h)
{
size_t p = 0;
const dlistint_t *tmp = h;

while (tmp != NULL)
{
tmp = tmp->next;
p++;
}
return (p);
}
