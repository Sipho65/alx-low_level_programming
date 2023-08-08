#include "main.h"
#include <stdlib.h>
/**
 * str_concat - function takes two pointers to strings
 * @s1: input one to concatenated
 * @s2: input two to concatenated
 * != '\0': The null terminator
 * Return: concatenated of s1 and s2
 */
char *str_concat(char *s1, char *s2)
{
	char *concatenated;
	int i, ci;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	i = ci = 0;
	while (s1[i] != '\0')
		i++;
	while (s2[ci] != '\0')
		ci++;
	concatenated = malloc(sizeof(char) * (i + ci + 1));

	if (concatenated == NULL)
		return (NULL);
	i = ci = 0;
	while (s1[i] != '\0')
	{
		concatenated[i] = s1[i];
		i++;
	}

	while (s2[ci] != '\0')
	{
		concatenated[i] = s2[ci];
		i++, ci++;
	}
	concatenated[i] = '\0';
	return (concatenated);
}

