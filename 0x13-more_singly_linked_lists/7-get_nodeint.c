#include "lists.h"

/**
 * get_nodeint_at_index -  Gets the node at a specific index in a linked list
 * @head: first node
 * @index: index linked
 * tempo : temporary pointer
 * Return: NULL or pointer
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *tempo = head;

	while (tempo && i < index)
	{
		tempo = tempo->next;
		i++;
	}

	return (tempo ? tempo : NULL);
}
