#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * op_add - add two numbers
 * @a: int type number
 * @b: int type number
 * Return: sum
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - substruct two numbers
 * @a: int type number
 * @b: int type number
 * Return: result of the substruction
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - multiplies two numbers
 * @a: int type number
 * @b: int type number
 * Return: product
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - divide two numbers
 * @a: int type number
 * @b: int type number
 * Return: the result of the division
 */
int op_div(int a, int b)
{
	return (a / b);
}
/**
 * op_mod - give remainder of division of two numbers
 * @a: int type number
 * @b: int type number
 * Return: remainder
 */
int op_mod(int a, int b)
{
	return (a % b);
}
