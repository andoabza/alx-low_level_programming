#include "search_algos.h"

/**
 * linear_search - a function that find the given number in found in array
 *
 * @array: given array as input
 * @size: size of array
 * @value: value to be checked.
 *
 * Return: value if found else -1
 *
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	for (i = 0; i < size; i++)
	{

		if (value == array[i])
		{
			printf("Value checked array[%ld] = [%d]\n", i, array[i]);
			return (i);
		}

		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
	}

	return (-1);
}

