#include <stdio.h>
/**
  *main - entry point
  *
  *Return: Always 0 (success)
  */
int main(void)
{
	int c;

	for (c = 'a'; c <= 'z'; ++c)
	{
		if (c !='e' && c != 'q')
			putchar(c);
	}
	putchar('\n');
	return (0);
}
