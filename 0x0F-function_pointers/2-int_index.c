#include "function_pointers.h"
/**
 * int_index - searches for integers and return value using cmp
 * @array: array to be checked for values
 * @size: size of the array
 * @cmp: pointer to the function
 * Return: integer
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int index;

	if (cmp == NULL || array == NULL)
	{
		return (-1);
	}
	for (index = 0 ; index < size ; index++)
	{
		if (cmp(array[index] != 0))
		{
			return (index);
		}
	}
	return (-1);
}
