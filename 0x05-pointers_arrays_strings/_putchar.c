#include <unistd.h>
/**
  * _putchar - writes charcter to std out
  *
  *Return: 1
  */

int _putchar(char ch)
{
	return (write(1, &ch, 1));
}
