#include "main.h"
/**
 * main - print alphabets lowercase
 *
 * Description - print lowercase alphabets
 * Return : 0 (Success)
 */

/* print all  small alphabets */
void print_alphabet(void)
/* print all  small alphabets */
{
	char let;

	for (let = 'a' ; let <= 'z' ; let++)
	{
		_putchar(let);
	}
	_putchar('\n');
}
