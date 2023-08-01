#include <stddef.h>
#include "lists.h"

/**
 * listint_len - returns number of elements in a linked list
 * @h: linked list of type listint_t to visit
 *
 * Return: number of nodes
 */
size_t listint_len(const listint_t *h)
{
    size_t num = 0;

    while (h)
    {
        h = h->next;
        num++;
    }

    return (num);
}

