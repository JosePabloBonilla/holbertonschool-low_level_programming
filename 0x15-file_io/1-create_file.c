#include "holberton.h"

/**
 * create_file - function that creates a file
 * @filename: file being created
 * @text_content: content of file
 * Return: 1 on success. -1 on fail
 */
int create_file(const char *filename, char *text_content)
{
	int open_new, write_new, body = 0; /** body = content of file */

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		while (text_content[body])
		{
			body++;
		}
	}
	open_new = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	write_new = write(open_new, text_content, body);

	if (write_new == -1)
		return (-1);

	close(open_new);
	return (1);
}
