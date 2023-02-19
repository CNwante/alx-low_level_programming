#include <stdio.h>

/**
 * main - Outputs English Alphabets
 *
 * Description: Outputs lowercase letters except "e" and "q".
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;

	for (i = 97; i < 123; i++)
	{
		if (i != 101 && i != 113)
			putchar(i);
	}

	putchar(10);

	return (0);
}
