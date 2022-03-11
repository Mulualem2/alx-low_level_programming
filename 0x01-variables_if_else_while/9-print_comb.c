#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
  *main - entry point
  *
  *Return: Always 0 (success)
  */
int main(void)
{
	int c;

	for (c = '0'; c <= '8'; ++c)
	{
		putchar(c);
		putchar(',');
		putchar(' ');
	}
	putchar("9\n");
	return (0);
}
