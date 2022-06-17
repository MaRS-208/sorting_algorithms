#include "sort.h"

/**
 * _quick_sort - sorts an array of integers in \
 ascending order using the Quick sort algorithm
 * @array: array of numbers
 * @oarray: array of numbers
 * @size: size of array
 * @osize: size of array
 * Return: 0
 */

void _quick_sort(int *array, size_t size, int *oarray, size_t osize)
{
	size_t c, s;
	int x, z;

	if (!array || size <= 1)
		return;
	x = array[size - 1];
	for (c = 0, s = 0; c < (size - 1); c++)
	{
		if (array[c] == x)
			return;
		if (array[c] < x)
		{
			z = array[c];
			array[c] = array[s];
			array[s] = z;
			if (c != s)
				print_array(oarray, osize);
			s++;
		}
	}
	z = array[s];
	array[s] = x;
	array[size - 1] = z;
	if (s != (size - 1))
		print_array(oarray, osize);
	_quick_sort(array, s, oarray, osize);
	_quick_sort(array + s + 1, size - s - 1, oarray, osize);
}

/**
 * quick_sort - sorts an array of integers in \
 ascending order using the Quick sort algorithm
 * @array: array of numbers
 * @size: size of array
 * Return: 0
 */

void quick_sort(int *array, size_t size)
{
	_quick_sort(array, size, array, size);
}
