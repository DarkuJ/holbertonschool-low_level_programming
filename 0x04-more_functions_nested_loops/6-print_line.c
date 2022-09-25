#include "main.h"

/**
 * print_line - prints underscores a number
 * @n: an int given by main
 *
 * Description: uses header for link and loop for goal
 * Rreturn: void. no return
 */

void print_line(int n)
{
	while (n > 0)
	{
		_putcharr('_');
		n--;
	}
	_putcharr('\n');
}
