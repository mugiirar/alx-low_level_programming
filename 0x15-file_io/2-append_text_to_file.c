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
	int fp, l, w;

	fp = open(filename, O_WRONLY | O_APPEND);

	l = strlen(text_content);

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
	{
		return (1);
	}

	w = write(fp, text_content, l);

	if (fp < 0 || w < 0)
	{
		close(fp);
		return (-1);
	}

	close(fp);
	return (1);
}


