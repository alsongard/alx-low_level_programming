#include "main.h"
/**
 * main - print alphabets lowercase
 *
 * Description - print lowercase alphabets
 * Return : 0 (Success)
 */

void print_alphabet(void)
{
	char let;

	for (let = 'a' ; let <= 'z' ; let++)
	{
		_putchar(let);
	}
	_putchar('\n');
}
