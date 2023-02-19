#include <stdio.h>

/**
 * main - Outputs English Alphabets.
 *
 * Description: Outputs both lowercase and UPPERCASE alphaBETS.
 *
 * Return: Always 0 (Success).
 */

int main(void)
{
	int i, j;

	i = 97;
	j = 65;

	do {
		putchar(i);
		i++;
	} while (i < 123);

	while (j < 91)
	{
		putchar(j);
		j++;
	}

	putchar(10);

	return (0);
}
