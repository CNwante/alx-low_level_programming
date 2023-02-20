#include "main.h"

/**
 * _isalpha - Checks for alphabetic characters.
 * @c: type int character
 *
 * Return: 1 if "c" is a lowercase or uppercase letter,
 * 0 otherwise.
 */

int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
