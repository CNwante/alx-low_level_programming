#include "main.h"

/**
 * _strspn - gets the length of a prefix substring.
 *
 * @s: initial segment
 * @accept: accepted bytes.
 *
 * Return: accepted bytes number.
 */

unsigned int _strspn(char *s, char *accept)
{
	int i, j;
	int count = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{	count++;
				break;
			}
			j++;
		}
		if (accept[j] == '\0')
			return (count);
	}
	return (count);
}
