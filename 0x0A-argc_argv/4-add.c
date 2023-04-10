#include <stdio.h>
#include <stdlib.h>

/**
 *main -  a program that adds positive numbers.
 *@argc:argument count
 *@argv:argument vector
 *
 *Return:0 success,1 fail
 */

int main(int argc, char *argv[])
{
	int x, y, sum = 0;

	for (x = 1; x < argc; x++)
	{
		for (y = 0; argv[x][y] != '\0'; y++)
		{
			if (argv[x][y] < '0' || argv[x][y] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}

		sum += atoi(argv[x]);
	}
	printf("%d\n", sum);

	return (0);
}
