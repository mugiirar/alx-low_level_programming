#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Write a program that prints the alphabet in lowercase
 * Return: 0
 */

int main(void)

{
	char low;

	for (low = 'a'; low <= 'z'; low++)
	putchar(low);

	for (low = 'A'; low <= 'Z'; low++)
	putchar(low);
	putchar('\n');

	return (0);

}
