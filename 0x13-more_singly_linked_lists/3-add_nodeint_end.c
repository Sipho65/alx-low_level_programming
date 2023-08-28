#include "lists.h"

/**
 * add_nodeint_end - inserts a node to the end of a linked list
 * @head: pointer 
 * @n: insert data to the new element
 *
 * Return: the address of the new element,  or NULL if it fails
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *big;
	listint_t *bro = *head;

	big = malloc(sizeof(listint_t));
	if (!big)
		return (NULL);

	big->n = n;
	big->next = NULL;

	if (*head == NULL)
	{
		*head = big;
		return (big);
	}

	while (bro->next)
		bro = bro->next;

	bro->next = big;

	return (big);
}
