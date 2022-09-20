#include "main.h"
/**
 * int _isalpha - program startup
 *
 * Description: Uses _isalpha to find upper or lowercase
 * and returns `1` if `c` is lowercase or uppercase
 * and returns `0` otherwise
 * Return: return (0) exits program successfully, return (1) throws an error
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
