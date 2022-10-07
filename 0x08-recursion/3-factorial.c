#include "main.h"

/**
 *factorial - the prototype to ouse
 *@n: an int
 *
 *Return: 0
 */

int factorial(int n)
{
	if  (n < 0)
	{
		return (-1);
	}
	if  (n == 0)
	{
		return (1);
	}
	else
	{
	return (n * factorial(n - 1));
	}
}
