#include "main"

/**
 * print_numbers - prints 0-9 and new line
 * Description: Uses headers to link and a nested loops to achieve goal 
 * Return: void.
 */

void print_numbers(void)
{
	int i = 0;

	for (i = 0; i < 10; i++)
		_putchar(i + '0');
	_putchar('\n');
}
