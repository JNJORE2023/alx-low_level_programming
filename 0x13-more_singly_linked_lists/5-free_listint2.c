#include "lists.h"

/**
 * free_listint2 - Frees a Linked list
 * @head: Pointers to the listint_t list being freed
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
		return;

	while (*head)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}

	*head = NULL;
}
