#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - This program will assign a random number to the variable n
 * Return: (0)
 */

int main(void)

{
	int val, n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	val = n % 10;
	if (val > 5)
	{
	printf("Last digit of %d is %d and is greater than 5\n", n, val);
	}
	else if (val == 0)
	{
	printf("Last digit of %d is %d and is 0\n", n, val);
	}
	else if (val < 6 && val != 0)
	{
	printf("Last digit of %d is %d and is less than 6 and not 0\n", n, val);
	}
	return (0);

}
