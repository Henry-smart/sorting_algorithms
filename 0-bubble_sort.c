/*
 * File: 0-bubble_sort.c
 * Auth: Sangwani P Zyambo
 */
#include "sort.h"

/**
 * bubble_sort - Sorts an array of integers in ascending order
 * using the Bubble sort algorith.
 *
 * @array: Array of integers to be sorted
 * @size: The size of the @array
 */

void bubble_sort(int *array, size_t size)
{
	size_t i, j;
	int temp;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size - 1; j++)
		{
			/* if this pair is out of order */
			if (array[j] > array[j + 1])
			{
				/* swap them and remember something changed */
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
				print_array(array, size);
			}
		}
	}
}
