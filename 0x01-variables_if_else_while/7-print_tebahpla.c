#include <stdio.h>

/**
 * main - Outputs English Alphabets.
 *
 * Description: Outputs English alphabets in the reverse order (z-a).
 *
 * Return: Always 0 (Success).
 */

int main(void)
{
	int i;

	i = 122;

	do {
		putchar(i);
		i--;
	} while (i < 96);

	putchar(10);

	return (0);
}
