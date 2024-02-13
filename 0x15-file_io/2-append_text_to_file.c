#include "main.h"
/**
 * appent_text_to_file - Function that appends text at the end of a file
 * @filename: The file name
 * @text_content: The added content
 * Return: 1 if file exists, -1 if it does not exist
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file_b;
	int nletters;
	int rwr;

	if (!filename)
		return (-1);

	file_b = open(filename, O_WRONLY | O_APPEND);
	if (file_b == -1)
		return (-1);

	if (text_content)
	{

		for (nletters = 0 ; text_content[nletters] ; nletters++)
			;
		rwr = write(file_b, text_content, nletters);

		if (rwr == -1)
			return (-1);
	}
	close(file_b);

	return (1);
}
