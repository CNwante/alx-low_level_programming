#include "main.h"

/**
 * print_alphabet_x10 - prints alphabets
 *
 * Description: prints 10 times
 *
 * Return: Always(0).
 */

void print_alphabet_x10(void)
{
	int alphabet_count = 0;

	while (alphabet_count < 10)
	{
		char ch = 'a';

		do {
			_putchar(ch);
			ch++;
		} while (ch <= 'z');

		alphabet_count++;
		_putchar('\n');
	}
}
