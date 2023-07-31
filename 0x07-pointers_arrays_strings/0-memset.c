#include "main.h"
/**
 * _memset - fill a block of memory with a specific value
 * @size: size address of memory to be printed
 * @buffer: the desired value
 * @number: number of bytes to be changed
 *
 * Return: changes or nothing
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
