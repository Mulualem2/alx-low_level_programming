#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
  *main - entry point
  *
  *Return: 0
  */

int main(void)
{
	char str[100];
	int i = 0;
	int randNum;
	int s = 0;

	srand (time(NULL));

	for (i = 0; s < 2644; i++)
	{
		randNum = (rand() % 25)+ 65;
		str[i] = randNum;
		s += randNum;
	}
	str[i++] = 2772 - s;
	str[i++] = '\0';
	printf("%s\n", str);

	return (0);
}
