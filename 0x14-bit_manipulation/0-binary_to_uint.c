#include "main.h"

/**
 * binary_to_uint - creates ints to binary numbers
 * @b: it contains binary numbers in a string
 *
 * Return: decimal value
 */
unsigned int binary_to_uint(const char *b)
{
	int s;
	unsigned int dec_val = 0;

	if (!b)
		return (0);

	for (s = 0; b[s]; s++)
	{
		if (b[s] < '0' || b[s] > '1')
			return (0);
		dec_val = 2 * dec_val + (b[s] - '0');
	}

	return (dec_val);
}
