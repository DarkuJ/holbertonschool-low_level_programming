#include <stdio.h>
#include "main.h"
/**
 * _islower - checks for lowercase
 * @c: lower case
 * Return: (0) for succsess (1) if else
 */
int _islower(int c)
{
	if (c >= '97' && c <= '122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
