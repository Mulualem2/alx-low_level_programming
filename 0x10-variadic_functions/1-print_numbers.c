#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - prints numbers, followed by a new line
 * @separator: char type pointer
 * @n: int type number
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	char *s;
	unsigned int i;
	va_list list;

	if (separator == NULL || *separator == 0)
		s = "";
	else
		s = (char *) separator;
	va_start(list, n);

	if (n > 0)
		printf("%d", va_arg(list, int));
	for (i = 1; i < n; i++)
		printf("%s%d", s, va_arg(list, int));
	printf("\n");
	va_end(list);
}
