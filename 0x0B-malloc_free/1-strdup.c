#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory
 *
 * @str: string to be returned
 *
 * Return: NULL if str = NULL or a pointer to the duplicated string
 */

char *_strdup(char *str)
{
	char *str_dup;
	unsigned int i, j;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		;
	str_dup = (char *)malloc(sizeof(char) * (i + 1));

	str_dup = malloc(INT_MAX);

	if (str_dup = NULL)
	{
		printf("Can't allocate %d bytes (after %d calls)\n", INT_MAX, i);
		return (1);
	}

	for (j = 0; j <= i; j++)
		str_dup[j] = str[j];

	return (str_dup);
}
