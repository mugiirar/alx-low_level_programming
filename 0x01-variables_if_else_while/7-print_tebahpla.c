#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - prints the lowercase alphabet in reverse, followed by a new line.
 * Return: Always 0
 */

int main(void)

{
	char p;

	for (p = 'z'; p >= 'a'; p--)
	putchar(p);
	putchar('\n');

	return (0);
}
