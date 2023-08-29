#include "lists.h"

/**
 * sum_listint - sums up all the information in a listint_t list
 * @head: first nodwe
 * tempo : tempoary pointer
 * Return: sum
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *tempo = head;

	while (tempo)
	{
		sum += tempo->n;
		tempo = tempo->next;
	}

	return (sum);
}
