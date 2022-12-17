#include "main.h"

/**
 * _isupper - check if a character is an uppercase letter
 * @c: the character to check
 *
 * Return: 1 if c is an uppercase letter, 0 otherwise
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	return (0);
}

/**
 * main - check if a character is an uppercase letter
 *
 * Return: 0 on success
 */
int main(void)
{
	char c = 'A';
	if (_isupper(c))
	{
		printf("%c is an uppercase letter\n", c);
	}
	else
	{
		printf("%c is not an uppercase letter\n", c);
	}
	return (0);
}
