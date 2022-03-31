#include "main.h"

/**
 * _strlen_recursion - return length of string
 * @s: char type pointer
 * Return: Always 0 (if the string is null) otherwise string length
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
}
