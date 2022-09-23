#include "main.h"

/**
 * print_most_numbers - prints 0-9 with a new line except 2 and 4
 * Description: Uses headers to link and nested loops to exacute
 * Returrn: void. no returrn.
 */

void print_most_numbers(void)
{
	int i = 0;

	for (i = 0; i < 10; i++)
		if (i != 2 && i != 4)
			_putchar(i + '0');
	_putchar('\n');
}
