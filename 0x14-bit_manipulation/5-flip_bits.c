#include "main.h"

/**
 * flip_bits - the flips number of bit
 * @n: The first number
 * @m: The second number
 *
 * Return: count
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int s, count = 0;
	unsigned long int current;
	unsigned long int exclusive = n ^ m;

	for (s = 63; s >= 0; s--)
	{
		current = exclusive >> s;
		if (current & 1)
			count++;
	}
            return (count);
}
