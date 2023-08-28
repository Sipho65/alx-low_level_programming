#include "lists.h"

/**
 * free_listint - frees the linked list and element 
 * @head: listint_t list to be freed
 * return : NULL if fail
 */
void free_listint(listint_t *head)
{
	listint_t *frees;

	while (head)
	{
		frees = head->next;
		free(head);
		head = frees;
	}
}

