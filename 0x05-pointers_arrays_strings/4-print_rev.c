#include "main.h"

/**
 * print_rev - a function that prints a string, in reverse
 * fcounter is to first count to end, n is to count back
 * @s: str input
 * Return: string in reverse
 */

void print_rev(char *s)
{
	int i;

	i = 0;
	while (*(s + i) != 0)
		i++;
	for (i = i - 1; i >= 0; i--)
		_putchar(s[i]);
	_putchar(10);
}
