#include<stdio.h>
/**
 * main -reverse order aplhabets
 *
 * description - reverse order of alphabets
 * Return: 0 (Success)
 */

int main(void)
{
	char i;

	for (i = 'z' ; i >= 'a' ; i--)
	{
		putchar(i);
	}	
	putchar('\n');
	return (0);
	
}

