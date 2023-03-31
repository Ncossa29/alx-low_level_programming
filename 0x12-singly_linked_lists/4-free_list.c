#include <stdlib.h>
#include "list.h"

/**
 * void free_list(list_t *head) - prototype
 * @head: list_t to be freed
 */

void free_list(list_t *head);
{
	list_t *temp;

	while (head)
	{
		temp = head->next;
		free(head->str);
		free(head);
		head = temp;
	}
}
