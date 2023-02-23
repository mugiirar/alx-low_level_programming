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
	printf("FizzBuzz\n");
	}
	else if (n % 3 == 0)
	{
		printf("Fizz\n");
	}
	else if (n % 5 == 0)
	{
		printf("Buzz\n");
	}
	else
	{
		printf("%d\n", n);
	}
	}
	putchar('\n');
	return (0);
}
