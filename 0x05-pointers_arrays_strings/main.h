#include <stdio.h>

void reset_to_98(int *ptr)
{
	*ptr = 98;
}
void swap_int(int *a, int *b)
{
	int tmp;

	tmp = a;
	*a = *b;
	*b = tmp;
}
