#include "main.h"

/**
 * create_file - Creates the files in programme
 * @filename: name of the file to be created
 * @text_content: A pointer with context of file
 *
 * Return: 1 or -1
 */
int create_file(const char *filename, char *text_content)
{
	int fd, f, tex = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (tex = 0; text_content[tex];)
			tex++;
	}

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	f = write(fd, text_content, tex);

	if (fd == -1 || f == -1)
		return (-1);

	close(fd);

	return (1);
}

