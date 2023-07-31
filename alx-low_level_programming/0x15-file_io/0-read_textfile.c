#include "main.h"

/**
 * read_textfile - function that reads a text file
 * and prints it to the POSIX standard output.
 * @filename: name of file to read
 * @letters: nmber of bytes to read and write
 * Return: ssize_t number of bytes read or written
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file_descriptor;
	ssize_t actual_read;
	ssize_t actual_write;
	char *buffer;

	if (filename == NULL)
	{
		return (0);
	}
	file_descriptor = open(filename, O_RDONLY);
	if (file_descriptor == -1)
	{
		return (0);
	}
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		free(buffer);
		return (0);
	}
	actual_read = read(file_descriptor, buffer, letters);
	if (actual_read == -1)
	{
		return (0);
	}
	actual_write = write(STDOUT_FILENO, buffer, actual_read);
	if (actual_write != actual_read || actual_write == -1)
	{
		return (0);
	}
	free(buffer);
	close(file_descriptor);
	return (actual_write);
}
