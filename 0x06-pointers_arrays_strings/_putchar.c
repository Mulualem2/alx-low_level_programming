#include <unistd.h>
/**
  *_putchar - writes character into std out
  *
  *Return: charcter
  */
int _putchar(char ch)
{
	return (write(1, &ch, 1));
}
