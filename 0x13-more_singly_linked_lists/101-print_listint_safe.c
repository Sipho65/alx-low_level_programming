#include "lists.h"
#include <stdio.h>

size_t looped_listint_len(const listint_t *head);
size_t print_listint_safe(const listint_t *head);

/**
 * looped_listint_len - determines how many distinct nodes there are in a looped listint_t linked list
 * @head: A pointer
 * Return: If the list is not looped - 0.
 * Otherwise - the number of unique nodes in the list.
 */
size_t looped_listint_len(const listint_t *head)
{
	const listint_t *sipho, *calvin;
	size_t nodes = 1;

	if (head == NULL || head->next == NULL)
		return (0);

	sipho = head->next;
	calvin = (head->next)->next;

	while (calvin)
	{
		if (sipho == calvin)
		{
			sipho = head;
			while (sipho != calvin)
			{
				nodes++;
				sipho = sipho->next;
				calvin = calvin->next;
			}

			sipho = sipho->next;
			while (sipho != calvin)
			{
				nodes++;
				sipho = sipho->next;
			}

			return (nodes);
		}

		sipho = sipho->next;
		calvin = (calvin->next)->next;
	}

	return (0);
}

/**
 * print_listint_safe - Prints a listint_t list
 * @head: A pointer
 * printf : prints output
 * Return: The number of nodes
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t nodes, index = 0;

	nodes = looped_listint_len(head);

	if (nodes == 0)
	{
		for (; head != NULL; nodes++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}

	else
	{
		for (index = 0; index < nodes; index++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}

		printf("-> [%p] %d\n", (void *)head, head->n);
	}

	return (nodes);
}
