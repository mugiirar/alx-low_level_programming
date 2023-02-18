#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - process  a program that prints the alphabet in lowercase
 * Return: 0
 */

int main(void)

{
	char vss, e, q;

	e = 'e';
	q = 'q';

	for (vss = 'a'; vss <= 'z'; vss++)
	{
	if (vss != e && vss != q)
	putchar(vss);
	}
	putchar('\n');
	return (0);
}
