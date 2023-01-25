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
