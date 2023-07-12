#include "search_algos.h"

/**
 * linear_search - searches for a value in an array of integers
 * using linear search algorithm
 * @array: pointer to the array to be searched
 * @size: size of the array
 * @value: value of integer to be searched for in array
 * Return: first index wher value is located. -1 if value not
 * present or array is null
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked at array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	if (i == size)
		return (-1);
	return (-1);
}
