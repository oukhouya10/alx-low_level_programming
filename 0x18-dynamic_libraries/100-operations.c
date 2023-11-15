#include <stdio.h>

/**
 *add - adds two integers
 *@a: is an integer
 *@b: is an integer
 *Return: addition
 */

int add(int a, int b)
{
	return (a + b);
}

/**
 *sub - substract two integers
 *@a: is an int
 *@b: is an int
 *Return: substraction
 */

int sub(int a, int b)
{
	return (a - b);
}

/**
 *mul - multiply two integers
 *@a: is an int
 *@b: is an int
 *Return: multiplication
 */

int mul(int a, int b)
{
	return (a * b);
}

/**
 *div - divide two integers
 *@a: is an int
 *@b: is an int
 *Return: division
 */

int div(int a, int b){
    if (b == 0) {
	printf("Error: Division by zero\n");
	return 0;
    }
	return a / b;
}

/**
 *mod - remainder of division of two integers
 *@a: is an int
 *@b: is an int
 *Return: remainder
 */

int mod(int a, int b) {
    if (b == 0) {
	printf("Error: Division by zero\n");
	return 0;
    }
    return a % b;
}
