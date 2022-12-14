#include "main.h"
/**
 * jack_bauer - print 24 hours
 * Return: 00:00 
 * 23:59
 */
void jack_bauer(void)
{
	int hour;
	int minute;

	for (hour = 0; hour < 24; hour++)
	{
		for (minute = 0; minute < 60 ; minute++)
		{
                        _putchar((hour / 10) + '0');
			_putchar((hour % 10) + '0');
			_putchar(':');
			_putchar((minute / 10) + '0');

			_putchar((minute % 10) + '0');

			_putchar('\n');
		}
	}
}
