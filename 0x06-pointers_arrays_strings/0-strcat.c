#include "main.h"

/**
 * _strcat -  concatenates two strings.
 *
 * @dest: param pointer to a char
 * @src: param pointer to a char
 *
 * Return: value of dest
 */

char *_strcat(char *dest, char *src)
{
	int str1, str2;

	str1 = 0;
	str2 = 0;

	while (dest[str1] != '\0')
	{
		str1++;
	}
	do {
		dest[str1] = src[str2];
		str2++;
		str1++;
	} while (src[str2] != '\0');

	dest[str1] = '\0';
	return (dest);
}
