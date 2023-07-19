#include "main.h"
/**
 * jack_bauer - print every minute of the day
 *
 * description - print every minute of the day
 * Return: 0 (Success)
 */

void jack_bauer(void)
{
	int hour;
	int min;

	while (hour <= 23)
	{
		for (min = 0 ; min <= 60 ; min++)
		{
			_putchar(min + '0');
		}
		_putchar(hour + 'O');
		hour++;
	}
}
