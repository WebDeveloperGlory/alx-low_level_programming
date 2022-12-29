#include <stdio.h>
/**
 * main - prints string of information
 *
 * Return: always 0
 */
int main(void)
{
	char l;

	for (l = 'a'; l <= 'z'; l++)
	{
		if (l != 'q' && l != 'e')
			putchar(l);
	}
	putchar('\n');
}
