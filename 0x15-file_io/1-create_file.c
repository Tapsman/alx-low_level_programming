#include "main.h"
/**
 * create_file - A function that creates a file
 * @filename: Is the name of the file
 * @text_content: Content written
 * Returns: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int file_b;
	int nletters;
	int rwr;

	if (!filename)
		return (-1);

	file_b = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (file_b == -1)
		return (-1);
	if (!text_content)
		text_content = "";

	for (nletters = 0 ; text_content[nletters] ; nletters++)
		;
	rwr = write(file_b, text_content, nletters);
	if (rwr == -1)
		close(file_b);

	return (1);
}
