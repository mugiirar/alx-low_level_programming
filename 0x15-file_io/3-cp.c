#include "main.h"

/**
 * main - a program that copies the content of a file to another file
 * @argc: number of args
 * @argv: array of arguments
 * Return: 0 for success or -1 for faliure
 */

int main(int argc, const char *argv[])
{
	int fp_f;
	int fp_t;
	int n;
	int m;
	int x;
	int y;
	char *buffer[BUFF_SIZE];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	fp_f = open(argv[1], O_RDONLY);

	if (fp_f < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	fp_t = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	if (fp_t < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[1]);
		exit(99);
	}

	while ((n = read(fp_f, buffer, BUFF_SIZE)) > 0)
	{
		if ((m = write(fp_t, buffer, n)) != n)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit (99);
		}
	}
	
	x = close(fp_f);
	if (x < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fp_f);
		exit(100);
	}
	close(fp_t);
	if (y < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fp_t);
		exit(100);
	}

	return (0);
}


