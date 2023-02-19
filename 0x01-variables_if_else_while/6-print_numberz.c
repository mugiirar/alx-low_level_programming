#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main -  a program that prints all single digit numbers of base 10
 * Return:0
 */

int main(void)
{
	int v;

	for (v = 0; v < 10; v++)
	{
	putchar(v + '0');
	}
	putchar('\n');
	return (0);
}
