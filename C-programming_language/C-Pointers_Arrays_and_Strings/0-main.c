#include <stdio.h>

/**
 * main - determine the size of char, int, float and double.
 *
 * Return: 0 (success)
 */
int main(void)
{
	printf("Size of char:%lu bytes\n", sizeof(char));
	printf("Size of int:%lu bytes\n", sizeof(int));
	printf("Size of float:%lu bytes\n", sizeof(float));
	printf("Size of double:%lu bytes\n", sizeof(double));
	return (0);
}
