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
	str_dup = malloc(sizeof(*str_dup) * (i + 1));

	if (str_dup == NULL)
		return (NULL);

	for (j = 0; j <= i; j++)
		str_dup[j] = str[j];

	return (str_dup);
}
