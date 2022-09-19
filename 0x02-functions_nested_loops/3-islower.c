#include <stdio.h>
#include "main"
/**
 * _islower - checks for lowercase
 * @c: lower case
 * Return: (0) for succsess (1) if else
 */
int _islower(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
