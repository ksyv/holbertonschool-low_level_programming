#include "main.h"
/**
 * jack_bauer - print every minute of 24h
 */
void jack_bauer(void)
{
	int dh, uh, dm, um;

	for (dh = 0; dh < 3; dh++)
	{
		for (uh = 0; uh < 10; uh++)
		{
			for (dm = 0; dm < 6; dm++)
			{
				for (um = 0; um < 10; um++)
				{
					_putchar(dh + '0');
					_putchar(uh + '0');
					_putchar(':');
					_putchar(dm + '0');
					_putchar(um + '0');
					_putchar('\n');
				}
			}
		}
	};
}
