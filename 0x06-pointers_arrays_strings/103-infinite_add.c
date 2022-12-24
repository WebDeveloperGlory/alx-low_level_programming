#include "main.h"

/**
 * infinite_add - Add two numbers represented as strings
 * @n1: First number
 * @n2: Second number
 * @r: Buffer to store the result
 * @size_r: Size of the result buffer
 *
 * Returns: Pointer to the result, or 0 if the result cannot be stored in the buffer
 *
 * Assumptions:
 * - The numbers are positive or 0
 * - The strings only contain digits
 * - The strings are not empty
 */
char* infinite_add(char* n1, char* n2, char* r, int size_r)
{
	int len1 = strlen(n1);
	int len2 = strlen(n2);
	int len_r = (len1 > len2) ? len1 : len2;
	
	if (len_r + 1 > size_r)
	{
		return (0);
	}
	int carry = 0;

	for (int i = 0; i < len_r; ++i)
	{
		int digit1 = (i < len1) ? n1[len1 - 1 - i] - '0' : 0;
		int digit2 = (i < len2) ? n2[len2 - 1 - i] - '0' : 0;
		int sum = digit1 + digit2 + carry;
		r[len_r - i] = (sum % 10) + '0';
		carry = sum / 10;
	}
	if (carry > 0)
	{
		r[0] = carry + '0';
		return (r);
	}
	return (r + 1);
}
