#include "main.h"

/**
 * read_textfile - function that reads a text file and prints it to
 *  the POSIX standard output.
 *  @filename: pointer to the file
 *  @letters: number of letters
 *  Return: actual number of letters it could read and print
 *  if the file can not be opened or read, return 0
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t count;
	int p;
	int n;
	char *buff;

	p = open(filename, O_RDONLY);

	buff = malloc(sizeof(char) * letters);

	if (buff == NULL)
	{
		return (0);
	}

	n = read(p, buff, letters);

	count = write(STDOUT_FILENO, buff, n);

	if (p < 0 || n < 0 || count < 0)
	{
		free(buff);
		return (0);
	}

	free(buff);
	close(p);
	return (count);
}
