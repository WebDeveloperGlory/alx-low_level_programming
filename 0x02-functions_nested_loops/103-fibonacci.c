#include <stdio.h>

/**
 * fibonacci_sum - Calculates the sum of the even-valued terms in the Fibonacci sequence whose values do not exceed a given maximum value.
 * @max_value: The maximum value of the terms to include in the sum.
 * Return: The sum of the even-valued terms in the Fibonacci sequence
*/
int fibonacci_sum(int max_value)
{
	int a = 1, b = 2;
	int sum = 0;
	int c;

	while (b <= max_value)
	{
		if (b % 2 == 0)
		{
			sum += b;
		}
		c = a + b;
		a = b;
		b = c;
	}
	return (sum);
}
/**
 * main - Tests the `fibonacci_sum` function by printing the sum of the even-valued Fibonacci terms whose values do not exceed 4,000,000.
 * Return: always 0
 */
int main(void)
{
	printf("%d\n", fibonacci_sum(4000000));
	return (0);
}
