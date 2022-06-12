#include "sort.h"

/**
 * bubble_sort - sorts an array of integers\
 in ascending order using the Bubble sort algorithm
 * @array: array
 * @size: array size
 * Return: 0
 */

void bubble_sort(int *array, size_t size)
{
	size_t c, s, z;

	for (c = size; c; c--)
	{
		for (s = 0; s < (c - 1); s++)
		{
			if (array[s] > array[s + 1])
			{
				z = array[s + 1];
				array[s + 1] = array[s];
				array[s] = z;
				print_array(array, size);
			}
		}
	}
}
