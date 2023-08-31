#include "main.h"

/**
 * get_endianness - makes sure to median
 * Return: 0 or 1 or pointer
 */
int get_endianness(void)
{
	unsigned int s = 1;
	char *c = (char *) &s;

	return (*c);
}
