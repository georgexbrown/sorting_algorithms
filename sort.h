#ifndef _SORT_H_
#define _SORT_H_

#include <stdio.h>
#include <stdlib.h>


void print_array(const int *array, size_t size);

void print_list(const listint_t *list);

void bubble_sort(int *array, size_t size);

void swap(int *a, int *b);



#endif