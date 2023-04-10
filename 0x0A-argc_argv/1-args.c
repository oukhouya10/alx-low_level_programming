#include <stdio.h>

/**
 *main - a program that prints the number of argu passed into it
 *@argc:argument count
 *@argv:argument vector
 *Return:argument number
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
