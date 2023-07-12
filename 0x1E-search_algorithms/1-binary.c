#include "search_algos.h"
#include <math.h>

/**
 * binary_search - searches for a value in a sorted array
 * of integers using the Binary search algorithm
 * @array: array of integers to be sorted
 * @size: size of array
 * @value: value to be searched
 * Return: index where value is or -1
 */
int binary_search(int *array, size_t size, int value)
{
	size_t left, right, j;
	int i;

	if (array == NULL)
		return (-1);

	left = 0;
	right = size - 1;
	while (left <= right)
	{
		i = floor((left + right)/2);
		printf("Searching in array: ");
		for (j = left; j <=right; j++)
		{
			if (j != right)
				printf("%d, ", array[j]);
			else
				printf("%d", array[j]);
		}
		printf("\n");
		if (value > array[i])
		{
			left = i + 1;
		}
		else if (value < array[i])
		{
			right = i - 1;
		}
		else
			return (i);
	}
	return (-1);
}
