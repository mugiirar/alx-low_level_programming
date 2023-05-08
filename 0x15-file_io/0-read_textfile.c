#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX
 * standard output.
 * @filename: pointer to a file
 * @letters: number of characters
 * Return: integer
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fp;
	ssize_t print;
	int n;
	char *buffer;

	buffer = malloc(sizeof(char) * letters);

	if (buffer == NULL)
		return (0);

	fp = open(filename, O_RDONLY);

	n = read(fp, buffer, letters);

	print = write(STDOUT_FILENO, buffer, n);

	if (fp < 0 || n < 0 || print < 0)
	{
		close(fp);
		free(buffer);
		return (0);
	}

	close(fp);
	free(buffer);
	return (print);
}
