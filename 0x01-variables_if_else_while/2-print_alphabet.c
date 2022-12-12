#include <stdio.h>

/**
 * main - Outputs alphabets.
 *
 * Description: Outputs alphabets in lowercase.
 *
 * Return: Always 0 (Success).
 */

int main(void)
{
	int i;

	for (i = 97; i < 123; i++)
		putchar(i);
	putchar(26);

	return (0);
}
