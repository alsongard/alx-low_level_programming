#include<stdio.h>
/**
 * main - Display the size of data types
 *
 * Description - print size of data types
 * Return: 0 (Success)
 */

int main(void)
{
printf("Size of a char:%2d byte(s)\n", sizeof(char));
printf("Size of an int:%2d byte(s)\n", sizeof(int));
printf("Size of a long int:%2d byte(s)\n", sizeof(long int));
printf("Size of an long long int:%2d byte(s)\n", sizeof(long long int));
printf("Size of a float:%2d byte(s)\n", sizeof(float));
return (0);
}
