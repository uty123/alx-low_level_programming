#include <stdio.h>

/**
 *
 * main - Entry point
 *
 * Return: - Always 0 (Success)
 */
int main (void)
{
	int a;
	char b;
	float c;

	printf("The size of a int: %lu byte(s)\n", (unsigned long)sizeof(a));
	printf("The size of a char: %lu byte(s)\n", (unsigned long)sizeof(b));
	printf("The size of a float: %lu byte(s)\n", (unsigned long)sizeof(c));
	return (0);
}
