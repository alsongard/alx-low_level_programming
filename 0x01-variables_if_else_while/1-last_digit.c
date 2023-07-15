#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - used to compare a digit to three options
 *
 * Description - compare the random generated interger
 * Return: 0 (Successfull)
 */
int main(void)
{
	int n;

	int lastDgt;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	lastDgt = n % 10;
	if (lastDgt > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, lastDgt);
	}
	else if (lastDgt == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, lastDgt);
	}
	else if (lastDgt < 6 && lastDgt != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lastDgt);
	}
	return (0);
}
