#include <stdio.h>

/**
 * main - prints address of variables
 *
 * Return: 0 (success)
 */
int main(void)
{
	char c;
	int i;
	float f;
	double d;

	printf("Address of variable 'c':%p\n", &c);
	printf("Address of variable 'i':%p\n", &i);
	printf("Address of variable 'f':%p\n", &f);
	printf("Address of variable 'd':%p\n", &d);
	return (0);
}
