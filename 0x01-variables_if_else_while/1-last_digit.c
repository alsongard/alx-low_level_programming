#include <stdlib.h>
#include <time.h>
#include<stdio.h>

/*
 * main - Entry point
 * Description - the proram is used to compare the random generated interger by three options
 * Return: 0 (Successfull)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (r > 5)
	{
	printf("Last digit of %i is %i and is greater than 5\n", n, r);
	}
	else if (r == 0)
	{
	printf("Last digit of %i is %i and is 0\n", n, r);
	}
	else
	{
	printf("Last digit of %i is %i and is less than 6 and not 0\n", n, r);
	}
	return (0);
}
