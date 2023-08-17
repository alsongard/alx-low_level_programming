#include "calc.h"
int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - add two intergers
 * @a: integer one
 * @b: integer two
 * @Return: interger
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - subtract two integers
 * @a: interger one
 * @b: interger two
 * Return: integer
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_div - divide two numbers
 * @a: interger one
 * @b: interger two
 * Return: interger
 */
int op_div(int a, int b)
{
	return (a / b);
}
/**
 * op_mod - return remainder from division
 * @a: interger one
 * @b: interger two
 * Return: return interger
 */
int op_mod(int a, int b)
{
	return (a % b);
}
/**
 * op_mul - multiply two intergers
 * @a: interger one
 * @b: interger two
 * Return: integer
 */
int op_mul(int a, int b)
{
	return (a * b);
}
