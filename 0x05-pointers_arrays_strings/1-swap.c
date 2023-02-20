#include "main.h"

/**
 * swap_int - a function that swaps the values of two integers
 * @a: first integer pointer parameter
 * @b: second integer pointer parameter
 *
 * Return: Swaps the values of a and b
 */

void swap_int(int *a, int *b)
{
	int c = *a;

	*a = *b;
	*b = c;
}
