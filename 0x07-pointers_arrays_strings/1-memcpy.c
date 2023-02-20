#include "main.h"

/**
 * _memcpy - copies memory area.
 *
 * @dest: memory area destination
 * @src: memory area source
 * @n: unasigned integer byte
 *
 * Return: a pointer to, dest.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int m;

	m = 0;
	do {
		*(dest + m) = *(src + m);
		m++;
	} while (m < n);

	return (dest);
}
