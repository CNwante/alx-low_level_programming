#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * str_concat - concatenates two strings.
 * @s1: first string.
 * @s2: second string.
 *
 * Return: pointer of an array of chars
 */

char *str_concat(char *s1, char *s2)
{
	char *strout;
	unsigned int strsum;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	strsum = strlen(s1) + strlen(s2) + 1;
	strout = malloc(sizeof(char) * strsum);

	if (strout != NULL)
	{
		strout[0] = 0;
		strcat(strout, s1);
		strcat(strout, s2);
	}
	return (strout);
}
