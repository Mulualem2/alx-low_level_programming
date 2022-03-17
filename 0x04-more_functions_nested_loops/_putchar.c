#include <unistd.h>
/**
  *_putchar - write character in to std out
  *
  *Return: 1
  */

int _putchar(char ch)
{
	return (write(1, &ch, 1));
}
