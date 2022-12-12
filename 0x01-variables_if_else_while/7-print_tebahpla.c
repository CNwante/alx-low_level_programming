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

	for (i = 122; i > 96; i--)
	{
		putchar(i);
	}

	putchar(10);

	return (0);
}
