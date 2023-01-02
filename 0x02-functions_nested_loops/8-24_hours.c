#include "main.h"
/**
 * jack_bauer - prints every minuite
 */
void jack_bauer(void)
{
	int mins, hrs;

	for (hrs = 0; hrs < 24; hrs++)
	{
		for (mins = 0; mins < 60; mins++)
		{
			_putchar('0' + hrs / 10);
			_putchar('0' + hrs % 10);
			_putchar(':');
			_putchar('0' + mins / 10);
			_putchar('0' + mins % 10);
			if ((hrs != 23) && (mins != 59))
				_putchar('\n');
		}
	}
}
