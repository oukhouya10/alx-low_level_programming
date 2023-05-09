#include "main.h"
#include <stdio.h>
#include <fcntl.h>

#define USAGE "Usage: cp file_from file_to\n"
#define ERR_NOREAD "Error: can't read from file %s\n"
#define ERR_NOWRITE "Error: can't write to %s\n"
#define ERR_NOCLOSE "Error: can't close fd %d\n"
#define PERMISSIONS (S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH)
#define BUFFER_SIZE 1024

/**
 * main - copie the content of file to another
 * @argc:arguments count
 * @argv:argument vector
 * Return: 1 on success, 0 on failure
 */
int main(int argc, char **argv)
{
	int from_fd = 0, to_fd = 0;
	ssize_t x;
	char buf[READ_BUF_SIZE];

	if (argc != 3)
		dprintf(STDERR_FILENO, USAGE), exit(97);
	from_fd = open(argv[1], O_RDONLY);
	if (from_fd == -1)
		dprintf(STDERR_FILENO, ERR_NOREAD, argv[1]), exit(98);
	to_fd = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, PERMISSIONS);
	if (to_fd == -1)
		dprintf(STDERR_FILENO,  ERR_NOWRITE, argv[2]), exit(99);

	while ((x = read(from_fd, buf, READ_BUF_SIZE)) > 0)
		if (write(to_fd, buf, x) != x)
			dprintf(STDERR_FILENO, ERR_NOWRITE, argv[2]), exit(99);
	if (x == -1)
		dprintf(STDERR_FILENO, ERR_NOREAD, argv[1]), exit(98);

	from_fd = close(from_fd);
	to_fd = close(to_fd);
	if (from_fd)
		dprintf(STDERR_FILENO, ERR_NOCLOSE, from_fd), exit(100);
	if (to_fd)
		dprintf(STDERR_FILENO, ERR_NOCLOSE, from_fd), exit(100);

	return (EXIT_SUCCESS);
}
