#include "main.h"

/**
 * print_line - a function to print a straight line
 * Return - Always 0 (Success)
 */

void print_line(int n)
{
	char c;

	for (c = 0; c < n; c++)
	_putchar('_');
	_putchar('\n');
}
