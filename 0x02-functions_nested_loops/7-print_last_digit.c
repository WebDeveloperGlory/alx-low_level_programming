#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @int: interger
 * Return: int
 */
int print_last_digit(int n)
{
	int last;

	last = (n % 10);
	return last;
}
