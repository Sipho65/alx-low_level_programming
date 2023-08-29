#include "lists.h"

/**
 * find_listint_loop - finds loops in a linked list
 * @head: searches linked list
 *
 * Return: NULL or node
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *back = head;
	listint_t *front = head;

	if (!head)
		return (NULL);

	while (back && front && front->next)
	{
		front = front->next->next;
		back = back->next;
		if (front == back)
		{
			back = head;
			while (back != front)
			{
				back = back->next;
				front = front->next;
			}
			return (front);
		}
	}

	return (NULL);
}
