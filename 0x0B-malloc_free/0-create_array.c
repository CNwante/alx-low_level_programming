#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * create_array - creates an array of chars,
 * and initializes it with a specific char.
 *
 * @size: size of the array
 * @c: Character storage of array
 *
 * Return: NULL if size = 0,
 * a pointer to the array, or NULL if it fails.
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *mem;

	if (size == 0)
		return (NULL);

	mem = malloc(sizeof(c) * size);

	if (mem == NULL)
		return (NULL);

	i = 0;
	while (i < size)
	{
		mem[i] = c;
		i++;
	}
	return (mem);
}
