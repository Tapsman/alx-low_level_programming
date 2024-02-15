#include "main.h"
/**
 * read_textfile - A function that reads the text file and prints it
 * to the POSIX stdo
 * @filename: The name of the file to read
 * @letters: The number of letters to read
 * Return: The number of letters it can read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file_b;
	ssize_t lenr, lenw;
	char *buffer;

	if (filename == NULL)
		return (0);

	file_b = open(filename, O_RDONLY);
	if (file_b == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		close(file_b);
		return (0);
	}

	lenr = read(file_b, buffer, letters);
	close(file_b);
	if (lenr == -1)
	{
		free(buffer);
		return (0);
	}
	lenw = write(STDOUT_FILENO, buffer, letters);
	free(buffer);
	if (lenr != lenw)
		return (0);
	return (lenw);
}
