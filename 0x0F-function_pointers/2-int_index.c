#include "function_pointers.h"

/**
 *int_index - function searches for an integer
 *@array:the array
 *@size:size of array
 *@cmp: to compare values
 *
 *Return: returns the index of the first element
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int index = 0;

	if (array && size && cmp)
		while (index < size)
		{
			if (cmp(array[index]))
				return (index);
			index++;
		}
	return (-1);
}
