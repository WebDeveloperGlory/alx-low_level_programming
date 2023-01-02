#include "main.h"
/**
 * times_table - prints 9 times table
 */
void times_table(void)
{
	int i, j, rst;

	for (i = 0; i <= 9; i++)
	{
		_putchar('0');
		for (j = 1; j <= 9; j++)
		{
			_putchar(',');
			_putchar(' ');
			rst = i * j;
			if (rst < 10)
				_putchar(' ');
			else
				_putchar((rst / 10) + '0');
			
			_putchar((rst % 10) + '0');
		}
		_putchar('\n');
	}
}
