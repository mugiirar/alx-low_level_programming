#include "main.h"
/**
 * create_file - a function that creates a file.
 * @filename: name of new file
 * @text_content: info to be written
 * Return: 1 for success or -1 for faliure
 */

int create_file(const char *filename, char *text_content)
{
	int fp;
	int len, y;

	if (filename == NULL)
	{
		return (-1);
	}

	fp = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);

	if (fp < 0)
	{
		return (-1);
	}
	len = 0;
	if (text_content != NULL)
	{
	while (text_content[len])
		len++;
	}

	y = write(fp, text_content, len);

	if (y < 0)
		return (-1);

	close(fp);
	return (1);
}
