#include<stdio.h>
/**
 * main - display all alphabet in lowercase
 *
 * descrption - display alphabet in lowercase
 * Return: 0 (Success)
 */

int main(void)
{
	char all;

	for (all = 'a' ; all <= 'z' ; all++)
	{
		putchar(all);
	}

	putchar('\n');
	return (0);
}
