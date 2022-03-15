#include "main.h"
/**
  *main - entry point
  *
  *Return: 0 (success)
  */
int main(void)
{
	char _p[] = "_putchar";
	int c;

	for (c = 0; _p[c] != '\0'; c++)
	{
		_putchar(_p[c]);
	}
	_putchar('\n');
	return (0);
}
