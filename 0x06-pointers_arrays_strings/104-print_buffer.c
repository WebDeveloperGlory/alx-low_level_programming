#include "main.h"

/**
 * print_buffer - prints buffer
 * @b: char
 * @size: number
 */
void print_buffer(char *b, int size)
{
	int i;

	if (size <= 0)
	{
		putchar('\n');
		return;
	}

	for (i = 0; i < size; i++)
	{
		if (i % 10 == 0)
			printf("%08x: ", i);
		printf("%02x ", b[i] & 0xff);
		if (i % 10 == 9)
		{
			int j;
			for (j = i - 9; j <= i; j++)
				putchar(isprint(b[j]) ? b[j] : '.');
			putchar('\n');
		}
	}
	if (i % 10 != 0)
	{
		int j;
		int spaces = (10 - (i % 10)) * 3;
		for (j = 0; j < spaces; j++)
			putchar(' ');
		for (j = i - (i % 10); j < i; j++)
			putchar(isprint(b[j]) ? b[j] : '.');
		putchar('\n');
	}
}
