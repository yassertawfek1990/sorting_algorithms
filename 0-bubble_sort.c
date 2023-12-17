#include "sort.h"

/**
 * swap - Swarray.
 * @z: The egrto wap.
 * @x: The r to swap.
 *
 * description: Pr.
 */
void swap(int *z, int *x)
{
	int t;

	t = *z;
	*z = *x;
	*x = t;
}

/**
 * bubble_sort - Sorrder.
 * @array: Anrt.
 * @size: Thsiz
 * Description: Pr
 */
void bubble_sort(int *array, size_t size)
{
	size_t j;
	size_t l;
	bool bub;

	l = size;
	bub = false;
	if (array == NULL || size < 2)
		return;
	while (bub == false)
	{
		bub = true;
		for (j = 0; j < l - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				swap(array + j, array + j + 1);
				print_array(array, size);
				bub = false;
			}
		}
		l--;
	}
}
