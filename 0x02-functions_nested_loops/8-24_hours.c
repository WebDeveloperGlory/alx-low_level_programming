#include "main.h"
/**
 * jack_bauer - prints every minuite
 */
void jack_bauer(void)
{
	char mins, hrs;

	for (hrs = 0; hrs < 24; hrs++)
	{
		if (hrs < 10)
			_putchar('0');
		
		_putchar(hrs + '0');
		_putchar(':');
		for (mins = 0; mins < 60; mins++)
		{
			if (mins < 10)
				_putchar('0');

			_putchar(mins + '0');
			if (hrs != 23 && mins != 59)
				_putchar('\n');
		}
	}
}


