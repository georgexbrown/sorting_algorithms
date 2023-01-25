#include "sort.h"

/**
 * swap - function that swaps contents of addresses
 * @a: first value to be swappped with second
 * @b: seccond value to be swapped
 *
 * Return: nothing
 */
void swap(int *a, int *b)
{
        int temp = *a;

        *a = *b;
        *b = temp;
}

/**
 * bubble_sort - function that sorts an array of integers in ascending order
 *	using the Bubble sort algorithm
 * @array: the array to be sorted
 * @size: length of the array, number of elements
 *
 * Return: nothing (updates the array)
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, j;

	if (array == NULL || size < 2)
		return;

	for (i = 0; i < size - 1; i++)
	{
		for (j = 0; j < size - i - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				swap(&array[j], &array[j + 1]);
				print_array(array, size);
			}
		}
	}
}
