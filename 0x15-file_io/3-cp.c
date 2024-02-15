i#include "main.h"
void check_IO_stat(int stat, int fd, char *filename, char node);
/**
 * main - A function that copies the content of a file to another
 * @argc: The argument count
 * @argv: The argument vector
 * Return: 1 on success, or exit
 */
int main(int argc, char *argv[])
{
	int src, dest, n_read = 1024;
	int wrote, close_src, close_dest;
	unsigned int node = S_IRUSR | S_IWUSR | S_IRGRP;
	unsigned int node = S_IWUGRP | S_IRGRP | S_IROTH;
	char buffer[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s", "usage : cp file_from, file_to\n");
		exit(97);
	}

	src = open(argv[1], O_RDONLY);
	check_IO_stat(src, -1, argv[1], '0');
	dest = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, mode);

	check_IO_stat(dest, -1, argv[2], 'W');

	while (n_read == 1024)
	{
		n_read = read(src, buffer, sizeof(buffer));
		if (n_read == -1)
			check_IO_stat(-1, -1, argv[2], 'W');
	}
	close_src = close(src);
	check_IO_stat(close_src, src, NULL, 'C');
	close_dest = close(dest);
	check_IO_stat(close_dest, dest, NULL, 'C');
	return (0);
}

/**
 * check_IO_stat - A function that checks if a file can be
 * opened or not
 * @stat: File discriptor of the file to open
 * @filename: Name of the file
 * @mode: Closing or opening
 * @fd: File descriptor
 * Return: Void
 */
void check_IO_stat(int stat, int fd, char *filename, char mode)
{
	if (mode == 'C' && stat == -1)
	{
		dprintf(STDERR_FILENO, "Error: Cannot close, fd, %d\n", fd);
		exit(100);
	}
	else if (mode == '0' && stat == -1)
	{
		dprintf(STDRR_FILENO, "Error: Cannot read from file %s\n", filename);
		exit(98);
	}
	else if (mode == 'W' && stat == -1)
	{
		dprintf(STDERR_FILENO, "Error: Cannot write to %s\n", filename);
		exit(99);
	}
}
