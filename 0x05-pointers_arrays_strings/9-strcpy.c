#include "main.h"
#include <stdio.h>

/**
 * _strcpy - a function that copies the string pointed to by src,
 * including the terminating null byte (\0),
 * to the buffer pointed to by dest
 *
 * @dest: destination.
 * @src: source.
 *
 * Return: the pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int count = 0;

	for (; count >= 0; count++)
	{
		*(dest + count) = *(src + count);
		if (*(src + count) == '\0')
			break;
	}
	return (dest);
}
