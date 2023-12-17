#include "sort.h"

int partition(int *array, size_t size, int l, int r);
void sort(int *array, size_t size, int l, int r);
void quick_sort(int *array, size_t size);
void swap(int *z, int *x);

/**
 * partition - Ordernt as pivot.
 * @array: Theers.
 * @size: Thay.
 * @l: Theorder.
 * @r: The.
 * Return: Theindex.
 */
int partition(int *array, size_t size, int l, int r)
{
	int *p, a, b;

	p = array + r;
	for (a = b = l; b < r; b++)
	{
		if (array[b] < *p)
		{
			if (a < b)
			{
				swap(array + b, array + a);
				print_array(array, size);
			}
			a++;
		}
	}
	if (array[a] > *p)
	{
		swap(array + a, p);
		print_array(array, size);
	}
	return (a);
}

/**
 * sort - Implemenrecursion.
 * @array: Ansort.
 * @size: Tharray.
 * @l: Therder.
 * @r: The.
 */
void sort(int *array, size_t size, int l, int r)
{
	int p;

	if (r - l > 0)
	{
		p = partition(array, size, l, r);
		sort(array, size, l, p - 1);
		sort(array, size, p + 1, r);
	}
}
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
 * quick_sort - Sort an arraalgorithm.
 * @array: sgers.
 * @size: Theerray.
 * Description: Useplements.
 */
void quick_sort(int *array, size_t size)
{
	if (array == NULL || size < 2)
		return;
	sort(array, size, 0, size - 1);
}
