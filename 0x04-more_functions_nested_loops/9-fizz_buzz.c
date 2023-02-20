#include <stdio.h>

/**
 * main - Prints the numbers from 1 to 100
 *
 * Description: For multiples of 3 prints "Fizz",
 * For multiples of 5 prints "Buzz",
 * For multiples of 3 && 5 prints "FizzBuzz"
 * Fon non miltiples of 3 || 5 prints the number.
 *
 * Return: Always 0 (Sucess)
 */

int main(void)
{
	int num;

	for (num = 1; num <= 100; num++)
	{
		if (num % 3 == 0 && num % 5 == 0)
		{
			printf(" FizzBuzz");
		}
		else if (num % 3 == 0)
		{
			printf(" Fizz");
		}
		else if (num % 5 == 0)
		{
			printf(" Buzz");
		}
		else if (num == 1)
		{
			printf("%d", num);
		}
		else
		{
			printf(" %d", num);
		}
	}
	printf("\n");

	return (0);
}
