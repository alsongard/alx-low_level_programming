#include<stdio.h>
/**
 * main -display all hexadecimal
 *
 * description - display all values of hex
 * Return: 0 (Success)
 */
int main(void)
{
	char num;
	char let;

	for (num = '0' ; num <= '9' ; num++)
	{
		putchar(num);
	}
	for (let = 'a' ; let <= 'f' ; let++)
	{
		putchar(let);
	}
	putchar('\n');
	return (0);
}
