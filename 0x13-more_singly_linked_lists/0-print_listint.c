#include "lists.h"

/**
* print_listint_t - print all elements of the linked list
* @h: linked list to be  printed
*
* Return: the number of nodes
*/
size_t print_listint_t(const listint_t *h)
{
	size_t num = 0;

	while (h)
	{
		printf("%d\n", h->n);
		num++;
		h = h->next;
	}

	return (num);
}
