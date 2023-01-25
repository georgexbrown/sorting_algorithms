#include "sort.h"

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
	for (int i = 0; i < size - 1; i++)
	{
		for (int j = 0; j < size - i - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				swap(&array[j], &array[j + 1]);
				print_array(array, size);
			}
		}
	}
}
