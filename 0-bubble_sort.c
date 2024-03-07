#include "sort.h"
/**
 * bubble_sort - function use bubble algorithm for sorting
 * @array: pointer to array
 * @size: length of array
 */

void bubble_sort(int *array, size_t size)
{
        int i, j;
        for (i = 0; i < size - 1; i++)
        {
                for (j = 0; j < size - i - 1; j++ )
                {
                        if (array[j] > array[j + 1])
                        {
                            int temp = array[j];
                            array[j] = array[j + 1];
                            array[j + 1] = temp;
                            print_array(array, size);
                        }
                }
        }
}
