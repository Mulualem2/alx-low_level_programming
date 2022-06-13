#include <unistd.h>
/**
  *_putchar - writes carachter to std out
  *
  *Return: 1 successs
  */
 int _putchar(char ch)
{
	return (write(1, &ch, 1));
}
