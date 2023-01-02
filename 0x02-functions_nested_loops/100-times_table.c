#include "main.h"
/**
 * print_times_table - prints the nth time table
 * @n: interger
 */
void print_times_table(int n)
{
	int i, j;

	if (!(n > 15) && !(n < 0))
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				_putchar('0' + i * j);
				if (j != n)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
				}
			}
			_putchar('\n');
		}
	}
}
