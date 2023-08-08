#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _strdup - duplicate string to memory
 * @str: character structure
 * Return: 0
 */
char *_strdup(char *str)
{
	char *sipho;
	int i, j = 0;

	if (str == NULL)
		return (NULL);
	i = 0;
	while (str[i] != '\0')
		i++;

	sipho = malloc(sizeof(char) * (i + 1));

	if (sipho == NULL)
		return (NULL);

	for (j = 0; str[j]; j++)
		sipho[j] = str[j];

	return (sipho);
}

