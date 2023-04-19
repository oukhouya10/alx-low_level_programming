#include "function_pointers.h"
#include <stdlib.h>

/**
 *array_iterator - function that executes a function given
 *as a parameter on each element of an array.
 *@array: array
 *@size:size of the array
 *@action: a pointer to the function
 *
 *Return: nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int x;

	if (array && action)
		for (x = 0; x < size; x++)
			action(array[x]);
}
