#include "main.h"
#include <ctype.h>
/**
 * _isalpha - checksfor alphabet
 * @c: interger
 * Return: 1 if alpha, 0 otherwise
 */
int _isalpha(int c)
{
	if (isalpha(c))
		return (1);

	return (0);
}
