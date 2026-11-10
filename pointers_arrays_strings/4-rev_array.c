
#include "main.h"

/**
 * reverse_array - Reverses the content of an integer array.
 * @a: The array of integers.
 * @n: The number of elements.
 */
void reverse_array(int *a, int n)
{
	int i, temp;

	i = 0;
	while (i < n / 2)
	{
		temp = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = temp;
		i++;
	}
}
