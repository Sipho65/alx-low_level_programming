#include "main.h"
#include <stdlib.h>
/**
 * create_array - create array, assign char c
 * @size: The size of the array to be created.
 * @c:character value that will be assigned to array.
 * Return: SIZE==0 OR  NULL if fail
 *
 */
char *create_array(unsigned int size, char c)
{

	unsigned int i;
        char *str;

	str = malloc(sizeof(char) * size);
	if (size == 0 || str == NULL) //in stead of using 2 if statements separate
		return (NULL);

	for (i = 0; i < size; i++)
		str[i] = c;
	return (str);
}
