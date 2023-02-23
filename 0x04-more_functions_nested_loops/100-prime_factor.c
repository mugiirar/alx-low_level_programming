#include <stdio.h>

/**
 * main - prints the largest prime factor of the number 612852475143
 * Return: (0)
 */

int main(void)
{
	long int num = 612852475143;

	long int largest_prime_factor = 1;

	long int i;

	while (num % 2 == 0)
	{
		largest_prime_factor = 2;

		num /= 2;
	}

	for (i = 3; i <= num; i += 2)
	{
		while (num % i == 0)
		{
			largest_prime_factor = i;
			num /= i;
		}
	}

	printf("%ld\n", largest_prime_factor);

	return (0);
}
