#include <stdio.h>

/**
 * main - prints the sum of multiples of 3 0r 5 to 1024
 *
 * Return: Always 0
 */

int main(void)
{
	int p, d = 0;

	while (p < 1024)
	{
	if ((p % 3 == 0) || (p % 5 == 0))
	{
	d += p;
	}
	p++;
	}
	printf("%d\n", d);
	return (0);
}
