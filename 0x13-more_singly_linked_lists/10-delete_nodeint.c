#include "lists.h"

/**
 * delete_nodeint_at_index - deletes a node in a linked list
 * @index: index to delete from the node
 * @head: pointer
 * tempo : temporary
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tempo = *head;
	listint_t *current = NULL;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(tempo);
		return (1);
	}

	while (i < index - 1)
	{
		if (!tempo || !(tempo->next))
			return (-1);
		tempo = tempo->next;
		i++;
	}


	current = tempo->next;
	tempo->next = current->next;
	free(current);

	return (1);
}
