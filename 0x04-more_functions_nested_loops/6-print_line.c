#include "main.h"

/**
 * print_line - prints a straight line using '_'
 * @n: where n is the number of '_'
 *
 */
void print_line(int n)
{

	int len;

	if (n > 0)
	{
		for (len = 0; len < n; n++)
		{
			_putchar('_');

		}

		_putchar('\n');

	}
}
