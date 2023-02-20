#include <stdio.h>

/**
 * main - Sums up the multiples of 3 or 5
 *
 * Description: Multiples natural numbers between 0 and 1024
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int start, end, total;

	end = 1024;
	total = 0;

	for (start = 0; start < end; start++)
	{
		if ((start % 3 == 0) || (start % 5 == 0))
		{
			total = total + start;
		}
		else
		{
			continue;
		}
	}
	printf("%d", total);
	printf("\n");

	return (0);
}
