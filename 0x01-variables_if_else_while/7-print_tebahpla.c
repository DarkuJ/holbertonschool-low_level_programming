#include <stdio.h>
/**
 * main - print alphabet reversed
 *
 * Return: Always 0
 */
int main(void)
{
	char alpha;

	for (alpha = 'z'; alpha >= 'a'; alpha--)
	{
		putchar(alpha);
	}
	putchar ('\n');
	return (0);
}
