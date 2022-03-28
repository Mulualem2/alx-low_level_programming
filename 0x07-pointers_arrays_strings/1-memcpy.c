#includ "main.h"
/**
  *_memcpy - copies memory area
  *@dest: char type pointer
  *@src: char type pointer
  *@n: int type number
  *Return: a pointer to dest
  */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *i;

	i = dest;

	while (n > 0)
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}
	return (i);

}
