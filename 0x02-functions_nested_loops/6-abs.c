#include "main.h"

/**
 * _abs - Computes the absolute value of an integer.
 * @n: int type parameter.
 *
 * Return: Absolute value of "n"
 */

int _abs(int n)
{
	return ((n < 0) ?
		(n * -1) :
		(n));
}
