#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry Point
 * Descrition - prints the type of number wheter positive,negative or zero
 * Return: 0 (Successfull)
 * */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else
	{
		printf("%d is negative\n", n);
	}
	return (0);
}
