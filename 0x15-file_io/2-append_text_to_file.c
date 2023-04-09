#include "main.h"

/**
 * append_text_to_file - a function that appends text at the end of
 * a filename
 * @filename: name of the file
 * @text_content: text to be appended
 * Return: 1 for success or -1 for faliure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fp, len = 0;
	int y = 0;

	if (filename == NULL)
		return (-1);

	fp = open(filename, O_WRONLY | O_APPEND);

	if (text_content != NULL)
	{
		while (text_content[len])
			len++;

		y = write(fp, text_content, len);

		if (y < 0)
			return (-1);

	}

	close(fp);
	return (1);
}
