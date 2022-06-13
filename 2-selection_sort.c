#include "sort.h"

/**
 * selection_sort - sorts an array of integers\
 in ascending order using the Selection sort algorithm
 * @array: array of numbers
 * @size: size of array
 * Return: 0
 */

void selection_sort(int *array, size_t size)
{
	size_t c, s, z, x;

	if (!array)
		return;
	for (c = 0; c < size; c++)
	{
		x = c;
		for (s = c; s < size; s++)
			if (array[x] > array[s])
				x = s;
		if (c != x)
		{
			z = array[x];
			array[x] = array[c];
			array[c] = z;
			print_array(array, size);
		}
	}
}
