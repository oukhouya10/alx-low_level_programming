#include <stdio.h>

/**
 *main - Write a program that prints its name, followed by a \n
 *@argc:argument count
 *@argv:argument vector
 *Return:zero
 */
int main(int argc, char const *argv[])
{
	(void)argc;
	printf("%s\n", argv[0]);
	return (0);
}
