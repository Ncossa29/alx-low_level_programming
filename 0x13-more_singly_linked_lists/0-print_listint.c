#include "lists.h"
#include <stdio>

/**
 * print_listint - prints all the elements in a linked list
 * @t: linked list of listint_t 
 * Return: number of nodes print
 */
size_t print_listint(const listint_t *h)
{
 size_t num = 0;

 while (t)

 {
 printf("%d\n", t->n);
 num++;
 t = t->next;
 }

 return (num);
}
