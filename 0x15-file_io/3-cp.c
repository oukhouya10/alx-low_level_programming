#include "main.h"
#include <fcntl.h>
#include <stdio.h>
#include <stdarg.h>
#include <errno.h>
#define BUFFER_SIZE 1024

/**
  * error_file - if files can be opened
  * @file_from: file from
  * @file_to: file to
  * @av: argument vector
  * Return: void
  */
void error_file(int file_from, int file_to, char *av[])
{
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}
	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
		exit(99);
	}
}
/**
  * main - copies the content of file to another
  * @ac: argument count
  * @av: argument vector
  * Return: Always 0
  */
int main(int ac, char *av[])
{
	int file_from, file_to, err;
	ssize_t nr, wr;
	char buf[1024];

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
		exit(97);
	}
	file_from = open(av[1], O_RDONLY);
	file_to = open(av[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	error_file(file_from, file_to, av);
	nr = 1024;
	while (nr == 1024)
	{
		nr = read(file_from, buf, 1024);
		if (nr == -1)
			error_file(-1, 0, av);
		wr = write(file_to, buf, nr);
		if (wr == -1)
			error_file(0, -1, av);
	}
	err = close(file_from);
	if (err == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
		exit(100);
	}
	return (0);
}
