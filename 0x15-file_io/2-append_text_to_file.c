#include "main.h"
/**
 * append_text_to_file - a function that appends text at the end
 * of a file
 * @filename: pointer to a file
 * @text_content: text to append
 * Return: integer
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

