#include "main.h"

/**
 * _isupper - Writes the char c to stdout
 * @c: The character to print
 * Return: On succes if 1 else o
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

