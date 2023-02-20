#include "main.h"

/**
 * _strstr - finds the first occurrence of the substring.
 *
 * @haystack: entire string.
 * @needle: substring.
 *
 * Return: pointer to the beginning of located substring or
 * NULL if the substring is not found.
 */

char *_strstr(char *haystack, char *needle)
{
	char *s_haystack;
	char *s_needle;

	while (*haystack != '\0')
	{
		s_haystack = haystack;
		s_needle = needle;

		while (*haystack != '\0' && *s_needle != '\0' && *haystack == *s_needle)
		{
			haystack++;
			s_needle++;
		}
		if (!*s_needle)
			return (s_haystack);
		haystack = s_haystack + 1;
	}
	return (0);
}
