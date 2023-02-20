#include "main.h"

/**
 * print_times_table - Outputs Times Table.
 * @n: int type parameter.
 *
 * Description: Outputs the times table starting with 0
 * where num1 and num2 = multiplication numbers, pro = product.
 *
 * Return: Times Table.
 */

void print_times_table(int n)
{
	int num1, num2, pro;

	if (n >= 0 && n <= 15)
	{
		for (num1 = 0; num1 <= n; num1++)
		{
			for (num2 = 0; num2 <= n; num2++)
			{
				pro = num1 * num2;
				if (num2 == 0)
				{
					_putchar(pro + '0');
				} else if (pro < 10 && num2 != 0)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
					_putchar(pro + '0');
				} else if (pro >= 10 && pro < 100)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar((pro / 10) + '0');
					_putchar((pro % 10) + '0');
				} else if (pro >= 100)
				{
					_putchar(',');
					_putchar(' ');
					_putchar((pro / 100) + '0');
					_putchar(((pro / 10) % 10) + '0');
					_putchar((pro % 10) + '0');
				}
			}
			_putchar('\n');
		}
	}
}
