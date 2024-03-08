#include "sort.h"

/**
 * swap_int - function that swap two integers
 * @a: first int
 * @b: sec integer
 */

void swap_int(int *a, int *b)
{
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}

/**
 * partition - function that devide an array in two part
 * array: the array we want to sort
 * @size: size of the array
 * @start: starting index to sort from
 * @end: the last endex in array to sort to it
 * Return: partition index
 */

int partition(int *array, size_t size, int start, int end)
{
	int i;
	int pivot = array[end];
	int Pindex = start;
	for (i = start; i < end; i++)
	{
		if (array[i] <= pivot)
		{
			swap_int(&(array[i]), &(array[Pindex]));
			Pindex = Pindex + 1;
		}
	}
	swap_int(&(array[Pindex]), &(array[end]));
	print_array(array, size);
	return Pindex;
}

/**
 * sort_rev - function that sort array partitons
 * @size: size of the array
 * @start: starting index
 * @end: end index
 */
void sort_rev(int *array, size_t size, int start, int end)
{
	if (start < end)
	{
		int Pindex = partition(array,size, start, end);
		sort_rev(array, size,  start , Pindex - 1);
		sort_rev(array, size, Pindex + 1 , end);
	}
}
/**
 * quick_sort - the sorting algorithm
 * @array: the array
 * @size: size of array
 */

void quick_sort(int *array, size_t size)
{
	if (array == NULL || size < 2)
		return;
	sort_rev(array, size, 0, size - 1);
}
