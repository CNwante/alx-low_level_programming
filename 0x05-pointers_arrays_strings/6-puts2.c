#include "main.h"

/**
 * puts2 - prints one char out of 2 of a string.
 *
 * @str: input string.
 *
 * Return: void.
 */

void puts2(char *str)
{
	int count;

	for (count = 0; count >= 0; count++)
	{
		if (str[count] == '\0')
		{
			_putchar('\n');
			break;
		}
		if (count % 2 == 0)
			_putchar(str[count]);
	}
}
