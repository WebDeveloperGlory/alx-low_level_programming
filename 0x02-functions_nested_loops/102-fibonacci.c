#include <stdio.h>
/**
 * main - prints 50 Fibonacci numbers
 * 
 * Return: always 0
 */
int main(void)
{
	int a, b, i;
	long int tmp;

	a = 1;
	b = 2;
	printf("%d, ", 1);
	printf("%d, ", 2);
	for (i = 3; i <= 50; i++)
	{
		tmp = a + b;
		printf("%ld", tmp);
		if (i == 50)
			break;
		printf(", ");
		a = b;
		b = tmp;
	}
	printf("\n");
	return (0);
}
