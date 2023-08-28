#include "lists.h"

/**
 * add_nodeint - new nodes are added at hte beggining of a linked lists
 * @head: 1st node pointer
 * @n: int or data
 *
 * Return: The address of the new element or NULL if it fails
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *big;

	big = malloc(sizeof(listint_t));
	if (!big)
		return (NULL);

	big->n = n;
	big->next = *head;
	*head = big;

	return (big);
}
