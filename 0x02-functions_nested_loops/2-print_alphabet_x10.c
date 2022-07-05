#include "main.h"

/**
 * print_alphabet_x10 - prints lowercacase alphabet
 * for loop loops 10 times
 * for loop to print a -> z
 */

void print_alphabet_x10(void)
{
	int j;
	int x;

for (x = 0; x < 10; x++)
{
	for (j = 'a'; j <= 'z'; j++)
	{
	_putchar(j);
	}
	_putchar('\n');
}
}
