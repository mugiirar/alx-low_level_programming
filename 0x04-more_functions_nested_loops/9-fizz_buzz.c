#include "main.h"

/**
 * main - prints the numbers from 1 to 100, followed by a new line.
 * for multiples of three print Fizz
 * for the multiples of five print Buzz
 * Return: Seccess 0
 */

int main(void)
{
	int n;

	for (n = 1; n <= 100; n++)
	{
	if (n % 3 == 0 && n % 5 == 0)
	{
	printf("FizzBuzz");
	printf(" ");
	}
	else if (n % 3 == 0)
	{
		printf("Fizz");
		printf(" ");
	}
	else if (n % 5 == 0)
	{
		printf("Buzz");
		printf(" ");
	}
	else
	{
		printf("%d", n);
		printf(" ");
	}
	}
	printf("\n");
	return (0);
}
