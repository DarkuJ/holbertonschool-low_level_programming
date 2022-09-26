#include "main.h"

/**
 * _puts - prints a string and new line
 *
 * @str: char to check
 * Description: print a string and new line to stdout
 *
 * Return: 0 is success
 */

void _puts(char *str)
{
	int string;

	for (string = 0; *(str + string) != '\0'; string++)
		_putchar(*(str + string));
	_putchar('\n');
}
