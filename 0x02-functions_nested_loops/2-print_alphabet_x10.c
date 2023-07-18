#include "main.h"
/**
 * print_alphabet_x10 
 *
 * Description - print all alphabets 10 times
 * Return: void
 */

void print_alphabet_x10(void)
{
	char  let;
	int line = 0;

	while (line < 10)
	{
		for (let = 'a' ; let <= 'z' ; let++)
		{
			_putchar(let);

		}

		_putchar('\n');
		line++;

	}
}
