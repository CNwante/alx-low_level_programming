#include <stdio.h>

/**
 * main - Outputs base 10 numbers.
 *
 * Description: Prints all single digit numbers of base 10
 * starting from 0, followed by a new line.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		putchar(i);
	}
	putchar(10);

	return (0);
}
