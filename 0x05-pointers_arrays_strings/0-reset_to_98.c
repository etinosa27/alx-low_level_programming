#include<stdio.h>
#include "main.h"

/**
 * reset_to_98 - takes a pointer to an int paramewter
 * and updates the value it points to 98
 * @n: int parameter
 * Return: Nothing
 */

void reset_to_98(int *n)
{
	printf("Value of 'n' : %p\n", n);
	printf("Address of 'm' : %p\n", &n);
	*n = 98;
}
	int main(void)
{
	int m;
	int *p;

	m = 402;
	p = &m;
	printf("%d\n", m);
	printf("%p\n", p);
	printf("%p\n", &m);
	reset_to_98(p);
	printf("%d\n", m);
	return (0);
}
