#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point for program
 * @argv: string for the arguments
 * @argc: count number of arguments
 * Return: (1) or (0)
 */

int main(int argc, char *argv[])
{
	int a;
	int sum = 0;

	if (argc < 1)
	{
		printf("0");
	}
	for (a = 0 ; a < argc ; a++)
	{
		if ((argv[a] >= 'a' && argv[a] <= 'z') && (argv[a] >= 'A' && argv[a] <= 'Z'))
		{
			printf("Error\n");
			return (1);
		}
		else
		{
			sum = sum + atoi(argv[a]);
		}
		printf("%d\n", sum);
	}
	return (0);
}
