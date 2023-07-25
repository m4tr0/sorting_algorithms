#include "sort.h"

/**
 * bubble_sort - Sorts an array of integers in ascending order using
 *               the Bubble sort algorithm.
 *
 * @array: The array to be sorted
 * @size: Number of elements in the array
 */
void bubble_sort(int *array, size_t size)
{
    int temp;
    size_t i, j;
    int swapped;

    if (array == NULL || size < 2)
        return;

    for (i = 0; i < size - 1; i++)
    {
        swapped = 0; /* Initialize a flag to check if any swap occurs in the inner loop */

        for (j = 0; j < size - i - 1; j++)
        {
            if (array[j] > array[j + 1])
            {
                /* Swap the elements if they are in the wrong order */
                temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;

                swapped = 1; /* Set the flag to 1 indicating a swap occurred */
                print_array(array, size); /* Print the array after each swap */
            }
        }

        /* If no two elements were swapped in the inner loop, the array is already sorted */
        if (swapped == 0)
            break;
    }
}
