#include "main.h"

int main(int argc, char *argv[])
{
	int fp_f, fp_t, w, k, v;
	char *buff[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to");
		exit(97);
	}
	fp_f = open(argv[1], O_RDONLY);
	if (fp_f < 0)
	{
		close(fp_f);
		dprintf(STDERR_FILENO, " Error: Can't read from file %s", argv[1]);
		exit(98);
	}
	fp_t = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	while ((read(fp_f, buff, 1024) > 0))
	{
		w = write(fp_t, buff, 1024);
		if (w < 0)
		{
			close(fp_t);
			dprintf(STDERR_FILENO, "Error: Can't write to %s", argv[2]);
			exit(99);
		}
	}
	k = close(fp_t);
	v = close(fp_f);
	if (k < 0 || v < 0)
	{
		if (k < 0)
			dprintf(STDERR_FILENO, "Error: Can't close fd %d", fp_t);
		if (v < 0)
			dprintf(STDERR_FILENO, " Error: Can't close fd %d", fp_f);

		exit(100);
	}
	return (0);
}
