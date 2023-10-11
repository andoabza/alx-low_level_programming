#include "search_algos.h"

/**
 * binary_search - a function that find avalue ion binary seairch
 * @array: given array for search.
 * @size: array size.
 * @value: value to be find.
 *
 * Return: value if found otherwise -1.
 *
 */

int binary_search(int *array, size_t size, int value)
{
	int low, high;
	int i;

	if (array == NULL)
		return (-1);
	low = 0;
	high = size - 1;

	while (low <= high)
	{
		int mid, l;

		l = size;
		printf("Searching in array: ");

		for (i = low; i <= high; i++)
			printf("%d ", array[i]);
		printf("\n");
		mid = low + (high - 1) / 2;

		if (array[mid] == value)
		{
			if (l == value)
				return (-1);
			return (mid);
		}
		else if (array[mid] < value)
			low = mid + 1;
		else
			high = mid - 1;
	}
	return (-1);
}
