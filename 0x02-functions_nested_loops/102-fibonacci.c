#include <stdio.h>
/**
 * main - prints 50 Fibonacci numbers
 * 
 * Return: always 0
 */
/*
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
*/
#include <stdio.h>
/**
 * fibonacci - does something
 * main - prints fibonacci numbers
 * @n: no of ints
 * Return: always 0
 */ 
int fibonacci(int n)
{
	if (n == 1)
	{
		return (1);
	}
	else if (n == 2)
	{
		return (2);
	}
	else
	{
		return (fibonacci(n-1) + fibonacci(n-2));
	}
}

int main(void)
{
	for (int i = 1; i <= 50; i++)
	{
		printf("%d, ", fibonacci(i));
	}
	printf("\n");
	return (0);
}
