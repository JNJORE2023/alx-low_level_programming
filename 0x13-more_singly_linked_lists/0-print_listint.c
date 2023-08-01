#include "lists.h"
#include <stddef.h>

/**
* print_listint - print all elements of a linked list
* @h: linked listbeing printed
*
* Return: the number of nodes
*/
size_t print_listint(const listint_t *h)
{
    size_t num = 0;
    while (h)
    {
	    printf("%d/n",h->n);
	    h = h->next;
	    num++;
    }
return : number of nodes;
}
