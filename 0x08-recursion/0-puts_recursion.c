#include "main.h"

/**
 *_puts_recursion - puts recursion of a string
 *@s: given int
 *
 * Return: 0 if success
 */

void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		_puts_recursion;
	}
return: 0
}
