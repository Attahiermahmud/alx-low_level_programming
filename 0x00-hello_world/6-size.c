#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: (0)
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float f;

	printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(a));
	printf("Size of b int: %lu byte(s)\n", (unsigned long)sizeof(b));
	printf("Size of c long int: %lu byte(s)\n", (unsigned long)sizeof(c));
	printf("Size of f long long long: %lu byte(s)\n", (unsigned long)sizeof(f));
	 printf("Size of f float: %lu byte(s)\n", (unsigned long)sizeof(f));
}
