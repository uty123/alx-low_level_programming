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
	long int d;
	long long int e;

	printf("The size of a int: %lu byte(s)\n", (unsigned long)sizeof(a));
	printf("The size of a char: %lu byte(s)\n", (unsigned long)sizeof(b));
	printf("The size of a float: %lu byte(s)\n", (unsigned long)sizeof(c));
	printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(d));
	printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof
	return (0);
}
