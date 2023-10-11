#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator -Each array elem print on a newl
 * @array: Array
 * @size: How many elem to print
 * @action: Print pointers in hex
 * Return: Void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
