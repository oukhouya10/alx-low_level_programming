#include "main.h"
/**
 *read_textfile - function that reads a text file and
 *prints it to the POSIX standard output
 *@filename:the name of file
 *@letters: the number of letters it should read and print
 *Return: the actual number of letters it could read and print
 *else return 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file_des;
	ssize_t bytes;
	char buff[READ_BUF_SIZE * 8];

	if (!filename || !letters)
		return (0);
	file_des = open(filename, O_RDONLY);
	if (file_des == -1)
		return (0);
	bytes = read(file_des, &buff[0], letters);
	bytes = write(STDOUT_FILENO, &buff[0], bytes);
	close(file_des);
	return (bytes);
}
