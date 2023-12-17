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
 * selection_sort - Sorithm.
 * @array: Anintegers.
 * @size: Thearra
 */
void selection_sort(int *array, size_t size)
{
	int *m;
	size_t a;
	size_t s;

	if (array == NULL || size < 2)
		return;
	for (a = 0; a < size - 1; a++)
	{
		m = array + a;
		for (s = a + 1; s < size; s++)
			m = (array[s] < *m) ? (array + s) : m;
		if ((array + a) != m)
		{
			swap(array + a, m);
			print_array(array, size);
		}
	}
}
