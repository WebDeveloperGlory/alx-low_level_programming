#include "main.h"

/** rot13 - shift each letter in string by 13places
 *
 * Return: str
 */
char *rot13(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if (str[i] > 'm')
			{
				str[i] -= 13;
			} else
			{
				str[i] += 13;
			}
		}
		else if (str[i] >= 'A' && str[i] <= 'Z')
		{
			if (str[i] > 'M')
			{
				str[i] -= 13;
			}
			else
			{
				str[i] += 13;
			}
		}
	}
	return (str);
}
