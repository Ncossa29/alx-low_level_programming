#include "lists.h"
/**
 * sum_dlistint - sums the values of all the nodes.
 * @head: pointer to the head of the list
 * Return: 0 or the sum
 */

int sum_dlistint(dlistint_t *head)
{
dlistint_t *m;
int sum = 0;
m = head;
while (m != NULL)
{
sum += m->n;
m = m->next;
}
return (sum);
}
