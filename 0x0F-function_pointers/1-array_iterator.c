#include "function_pointers.h"
/**
 * array_iterator - Executes a function on element of an array
 * @array: array used/passed to the function
 * @action: pointer to function
 * @size: size of an array
 * Return: (void)
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (action == NULL || array == NULL)
	{
		return;
	}
	while (size-- > 0)
	{
		action(*array);
		array++;
	}
}
