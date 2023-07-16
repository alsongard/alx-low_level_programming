#include<stdio.h>
/**
 * main - Print size of data tyoes
 *
 * description - print size of data types
 * return: 0 (Success)
 */

int main(void)
{
        printf("Size of a char: %2d byte(s)\n", sizeof(char));
        printf("size of an int: %2d byte(s)\n", sizeof(int));
        printf("size of a long int: %2d byte(s)\n", sizeof(long int));
        printf("size of an long long int: %2d byte(s)\n", sizeof(long long int));
        printf("size of a float: %2d byte(s)\n", sizeof(float));
        return (0);
}
