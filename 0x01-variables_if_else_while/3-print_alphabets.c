#include <stdio.h>

/**
 * main -  print alphabet in lowercase
 *
 * Return: (0)
 */

int main(void)
{
	char alpha;
	char ALPHA;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		putchar(alpha);
	}
	for (ALPHA = 'A'; ALPHA <= 'Z'; ALPHA++)
	{
		putchar(ALPHA);
	}
	putchar('\n');
	return (0);
}
