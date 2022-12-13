#include <stdio.h>

/**
 *
 * main - Entry point
 *
 * Return: - Always 0 (Success)
 */
int main(void)
{
	int a;
	char b;
	float c;
	long int e;
	long long int f;

	printf("The size of a int =%lu byte(s)\n", sizeof(a));
	printf("The size of a char =%lu byte(s)\n", sizeof(b));
	printf("The size of a float =%lu byte(s)\n", sizeof(c));
	printf("size of long int =%lu bytes\n", sizeof(e));
	printf("size of long long int =%lu bytes\n", sizeof(f));

	return (0);
}
