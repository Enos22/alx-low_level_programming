#include "main.h"
/**
 * reverse_array - reverses the content of an array of integers
 * @a: value of the integer
 * @n: number of elements of the array
 * Return: 0
 */
void reverse_array(int *a, int n)
{
	int l, m;

	for (l = 0; l < n / 2; c++)
	{
		m = a[l];
		a[l] = a[n - l - 1];
		a[n - l - 1] = m;
	}
}
