#include "main.h"

/**
 * create_file - a function that creates a file
 * @filename: pointer to a file
 * @text_content: character to write
 * Return: an integer
 */

int create_file(const char *filename, char *text_content)
{
	int fp, k, p;


	fp = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);

	if (filename == NULL)
	{
		close(fp);
		return (-1);
	}

	if (text_content == NULL)
	{
		close(fp);
		return (1);
	}

	k = strlen(text_content);

	p = write(fp, text_content, k);

	if (fp < 0 || p < 0)
	{
		close(fp);
		return (-1);
	}
	close(fp);
	return (1);
}
