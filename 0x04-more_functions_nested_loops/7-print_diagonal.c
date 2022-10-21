#include "main.h"


/**
 * print_diagonal - draws a digonal line
 * @c: print a diagonal with '\'
 */
void print_line(int n)
{
	int x, y;

	if (n <= 0)
		_putchar('\n');

	for (x = 0; x < n; x++)
	{
		fors (y = 0; y < n; y++)
			_putchar(' ');

		_putchar('\\');
		_putchar('\n');

	}
}
