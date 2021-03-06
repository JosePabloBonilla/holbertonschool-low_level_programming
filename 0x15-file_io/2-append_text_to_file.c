#include "holberton.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: name of file
 * @text_content: content of file
 * Return: 1 on success and -1 on fail
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int open_new, write_new, body = 0; /** body = size of text_content */

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
		return (1);

	open_new = open(filename, O_WRONLY | O_APPEND);
	if (open_new == -1)
		return (-1);

	while (text_content[body])
	{
		body++;
	}

	write_new = write(open_new, text_content, body);
	if (write_new == -1)
		return (-1);

	close(open_new);
	return (1);
}
