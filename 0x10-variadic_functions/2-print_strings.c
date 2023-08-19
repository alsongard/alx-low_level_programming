#include "variadic_functions.h"
#include <stdio.h>
/**
 * print_strings - print string which is separator
 * @separator: string to be printed
 * @n: number of arguments
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ap;
	char *str;

	va_start(ap, n);

	for (i = 0 ; i < n ; i++)
	{
		str = va_arg(ap, char *);
		if (!str)
		{
			str = "nil";
		}
		if (!separator)
		{
			printf("%s", str);
		}
		else if (separator && i == 0)
		{
			printf("%s", str);
		}
		else
		{
			printf("%s%s", separator, str);
		}
	}
	printf("\n");
	va_end(ap);
}
