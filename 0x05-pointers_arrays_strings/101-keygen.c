#include <stdlib.h>
#include <time.h>
#include <time.h>
#include <stdio.h>

#define PASSWORD_LENGTH 12

/**
 * main - generates multiple random value
 * Return: o
 */

int main(void)
{
	const char *v = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
	char password[PASSWORD_LENGTH + 1];
	int i;

	srand(time(NULL));

	for (i = 0; i < PASSWORD_LENGTH; i++)
	{
		int index = rand() % 62;

		password[i] = v[index];
	}
	password[PASSWORD_LENGTH] = '\0';

	printf("%s\n", password);

	return (0);
}
