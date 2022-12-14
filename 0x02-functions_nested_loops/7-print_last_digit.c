#include "main.h"

/**
 * print_last_digit - Outputs the last digit of a number
 * @n: int type parameter
 *
 * Return: Last digit of a value
 */

int print_last_digit(int n)
{
	int r;

	if (n < 0)
	{
		r = -1 * (n % 10);
		_putchar(r + '0');
		return (r);
	}
	else
	{
		r = n % 10;
		_putchar(r + '0');
		return (r);
	}
}
