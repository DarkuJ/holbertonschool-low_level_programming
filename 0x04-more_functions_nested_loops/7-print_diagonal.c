#include "main.h"

/**
 * print_diagonal - prints a diaginal line with a new line
 * @n: an int given by main
 *
 * Description: uses headers to link and a nested loop to exacute
 * return: void. no return.
 */

void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
		_putchar('\n');
	for (i = 0; i < n; i++)
	{
		for (j = n - i; j < n; j++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
}
