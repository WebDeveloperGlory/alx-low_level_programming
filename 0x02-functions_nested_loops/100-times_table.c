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
				int rst = i * j;

				if (rst < 10)
				{
					_putchar('0' + rst);
				}
				else if (rst > 99)
				{
					_putchar('0' + (rst / 100));
					_putchar('0' + (rst / 10));
					_putchar('0' + (rst % 10));
				else
				{
					_putchar('0' + (rst / 10));
					_putchar('0' + (rst % 10));
				}
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
