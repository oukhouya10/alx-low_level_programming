#include <stdio.h>

/**
 *main - print all arguments it receives
 *@agrc: argu count
 *@argv: argu vector
 *Return:0
 */
int main(int argc, char **argv)
{
	int i;
	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);

	return (0);
}
