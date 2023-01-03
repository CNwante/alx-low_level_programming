#include "main.h"

/**
 * _memset - fills memory with a constant byte.
 *
 * @s: points to a memory area
 * @b: constant byte
 * @n: unasigned integer
 *
 * Return: a pointer to the memory area, s.
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int m;

	for (m = 0; m < n; m++)
	{
		s[m] = b;
	}
	return (s);
}
