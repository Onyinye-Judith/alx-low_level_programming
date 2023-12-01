#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * read_textfile - Reads a text file and prints it to the POSIX standard output.
 * @filename: The name of the file to read.
 * @letters: The number of letters to read and print.
 * Return: The actual number of letters read and printed. 0 on failure.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, read_chars, write_chars;
	char *buffer;
	if (filename == NULL)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		free(buffer);
		return (0);
	}
	read_chars = read(fd, buffer, letters);
	if (read_chars == -1)
	{
		free(buffer);
		close(fd);
		return (0);
	}
	
	write_chars = write(STDOUT_FILENO, buffer, read_chars);
	if (write_chars == -1 || write_chars != read_chars)
	{
		free(buffer)
		close(fd)			return (0);
	}	
	free(buffer);
	close(fd);
	return (read_chars);
}
