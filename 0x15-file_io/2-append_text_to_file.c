#include "main.h"

/**
 * append_text_to_file - Appends text
 * @filename: A pointer with the name of the file
 * @text_content: The file with context
 * Return: 1 or -1 if fail
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int s, t, tex = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (tex = 0; text_content[tex];)
			tex++;
	}

	s = open(filename, O_WRONLY | O_APPEND);
	t = write(s, text_content, tex);

	if (s == -1 || t == -1)
		return (-1);

	close(s);

	return (1);
}
