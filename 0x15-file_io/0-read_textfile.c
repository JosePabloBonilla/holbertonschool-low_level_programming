#include "holberton.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: name of the file
 * @letters: letter in file
 * Return: file written
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int open_newfile, read_newfile, write_newfile;
	char *new_file;

	new_file = malloc(sizeof(char) * letters);
	if (filename == NULL)
		return (0);

	open_newfile = open(filename, O_RDONLY);

	if (open_newfile == -1)
		return (0);

	read_newfile = read(open_newfile, new_file, letters);
	write_newfile = write(STDOUT_FILENO, new_file, read_newfile);

	if (read_newfile == -1 || write_newfile == -1)
		return (0);

	close(open_newfile);
	free(new_file);
	return (write_newfile);
}
