#include <stdio.h>
#include <stdlib.h>
/**
 * main -Entry Point for program
 * @argc:  count number of arguments
 * @argv:  string used to hold arguments
 * Return: Always 0 (success)
 */

int main(int argc, char *argv[])
{
	int a;
	int result;

	if (argc < 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		for (a = 1 ; a < argc ; a++)
		{
			result = atoi(argv[a]) * atoi(argv[a - 1]);
		}
		printf("%d\n", result);
		return (0);
	}
}
