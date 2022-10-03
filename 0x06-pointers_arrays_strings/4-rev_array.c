#include "holberton.h"

/**
 * reverse_array - prototype to reverse
 * @a: an int to rev
 * @n: an int to number
 *
 * Return: 0
 */

void reverse_array(int *a, int n)
{
	int i;
	int temp = 0;

	for (i = 0; i < (n / 2); i++)
	{
		temp = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = temp;
	}
}
