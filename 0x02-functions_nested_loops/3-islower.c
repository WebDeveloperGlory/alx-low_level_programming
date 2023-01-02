#include "main.h"
#include <ctype.h>
/**
 * _islower - check for lowercase
 * Return: 1 if lowercase, 0 if not
 */
int _islower(int c)
{
	if (islower(c))
		return (1);
	
	return (0);
}
