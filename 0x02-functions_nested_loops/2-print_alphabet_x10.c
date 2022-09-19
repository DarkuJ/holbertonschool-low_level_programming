#include "main.h"
/**
 * print_alphabet_x10 - print alphabet 10 times
 *
 * Description: prints the alphabet 10 times
 */

void print_alphabet_x10(void)
{
	int stepper;
	char alpha;

	for (stepper = 0; stepper <= 9; stepper++)
	{
		for (alpha = 'a'; alpha <= 'z'; alpha++)
		{
			_putchar(alpha);
		}
		_putchar('\n');
	}
}
