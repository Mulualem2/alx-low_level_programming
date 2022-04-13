#include "function_pointers.h"

/**
 * print_name - Print a name
 * @name: char type pointer
 * @f: function pointer
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
