#include "main.h"
/**
 * main - print alphabets lowercase
 *
 * Description - print lowercase alphabets
 * Return : 0 (Success)
 */

void print_alphabet(void)
/* print small alphabets */
{
	char let;

	for (let = 'a' ; let <= 'z' ; let++)
	{
		_putchar(let);
	}
	_putchar('\n');
}
