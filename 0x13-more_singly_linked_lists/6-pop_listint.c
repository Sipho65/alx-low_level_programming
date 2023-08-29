#include "lists.h"

/**
 * pop_listint - removes the linked list's head node
 * @head: pointer
 * num : number 
 * temp : temporary pointer
 * Return: 0 on empty list or return num results
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int num;

	if (!head || !*head)
		return (0);

	num = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (num);
}
