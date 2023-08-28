#include "lists.h"

/**
 * listint_len - results of the linkrd lists
 * @h: linked list types
 *
 * Return: number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t num = 0;

	while (h)
	{
		num++;
		h = h->next;
	}

	return (num);
}

