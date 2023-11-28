#include "main.h"

/**
 * create_file - Creates a file with specified content.
 * @filename: The name of the file to create.
 * @text_content: A NULL terminated string to write to the file.
 * Return: 1 on success, -1 on failure.
 */
int create_file(const char *filename, char *text_content)
{
	int file_descriptor, write_result, length;

	if (filename == NULL)
		return (-1);

	file_descriptor = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);
	if (file_descriptor == -1)
		return (-1);

	if (text_content == NULL)
	{
		close(file_descriptor);
		return (1);
	}

	for (length = 0; text_content[length] != '\0'; length++)
		;

	write_result = write(file_descriptor, text_content, length);
	close(file_descriptor);

	if (write_result == -1 || write_result != length)
		return (-1);

	return (1);
}
