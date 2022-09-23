#include "main.h"
#include <stdio.h>

/**
 * _isdigit - returns 1 if digit, 0 if not
 * @c: is an int given by the function
 *
 * Description: uses headers to link a nested loop
 * Return: 1 if digit 0 if not
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	return (0);
}
