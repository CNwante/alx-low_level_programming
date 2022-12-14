#include "main.h"

/**
 * print_sign - Outputs the sign of a number.
 * @n: int parameter type
 *
 * Return: 1 and prints "+" if "n" is greater than zero,
 * -1 and prints "-" if "n" is less than zero,
 *  0 and prints 0 if "n" is zero.
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
