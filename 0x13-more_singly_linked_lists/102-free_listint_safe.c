#include "lists.h"

/**
 * free_listint_safe - frees a linked list
 * @h: pointer
 *
 * Return: freed list sum
 */
size_t free_listint_safe(listint_t **h)
{
	size_t bro = 0;
	int diff;
	listint_t *temp;

	if (!h || !*h)
		return (0);

	while (*h)
	{
		diff = *h - (*h)->next;
		if (diff > 0)
		{
			temp = (*h)->next;
			free(*h);
			*h = temp;
			bro++;
		}
		else
		{
			free(*h);
			*h = NULL;
			bro++;
			break;
		}
	}

	*h = NULL;

	return (bro);
}
