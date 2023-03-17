#include <stdio.h>
/**
*main - a program that prints the size of various type on the computer
*return: always 0 (success)
*/
int main(void)
{
printf("size of a char: %d byte(s)", sizeof(char));
printf("size of an int: %d byte(s)", sizeof(int));
printf("size of a long int: %d byte(s)", sizeof(long int));
printf("Size of a long long int: %d byte(s)", sizeof(long long int));
printf("Size of a float: %d byte(s)", sizeof(float));
return (0);
}
