#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * @head: double pointer list to  list_t list
 * @str: string to put
 * dd_node_end - adds a new node
 * Return: new element, or NULL
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *nod
	list_t *temp = *head;
	unsigned int len = 0;

	while (str[len])
		len++;

	nod malloc(sizeof(list_t));
	if (!nod
		return (NULL);

	nodstr = strdup(str);
	nodlen = len;
	nodnext = NULL;

	if (*head == NULL)
	{
		*head = nod
		return (nod
				}

	while (temp->next)
		temp = temp->next;

	temp->next = nod

	return (nod);
}
