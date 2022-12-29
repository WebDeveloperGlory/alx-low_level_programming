#include <stdio.h>
/**
 *  * main - prints string of information
 *   *
 *    * Return: always 0
 *     */
int main(void)
{
	char l;

	for (l = 'z'; l >= 'a'; l--)
	{
		putchar(l);
	}
	putchar('\n');
}
