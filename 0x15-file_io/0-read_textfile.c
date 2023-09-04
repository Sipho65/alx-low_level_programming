#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- it reads textfiles
 * @filename: The files that will be read by read_textfile
 * @letters: how many letters should be read
 * Return: w or 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *tex;
	ssize_t fd;
	ssize_t w;
	ssize_t r;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	tex = malloc(sizeof(char) * letters);
	r = read(fd, tex, letters);
	w = write(STDOUT_FILENO, tex, r);

	free(tex);
	close(fd);
	return (w);
}

