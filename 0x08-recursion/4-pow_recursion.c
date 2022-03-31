#include "main.h"

/**
 * _pow_recursion - return the value of x rased by y
 * @x: int type number
 * @y: int type number
 * Return: Always 1 (y lessthan 0) otherwise result
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}
