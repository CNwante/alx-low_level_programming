#include "main.h"

/**
 * _puts - Outputs a string, followed by a new line.
 *
 * @str: char type pointer parameter
 *
 * Return: void
 */

void _puts(char *str)
{
	int i = 0;

	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
