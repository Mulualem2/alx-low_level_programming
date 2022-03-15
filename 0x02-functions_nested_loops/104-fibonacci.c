#include "main.h"
#include <stdio.h>
/**
  *main - entry point
  *
  *Return: 0 (success)
  */
int main(void)
{
	unsigned long int a1 = 0, a2 = 0, b1 = 1, b2 = 2;
	unsigned long int place1, place2, place3;
	int count;

	printf("%lu, %lu, ", b1, b2);
	for (count = 2;+ count < 98; count++)
	{
		if (b1 + b2 > LARGEST || a2 > 0 || a1 > 0)
		{
			place1 = (b1 + b2) / LARGEST;
			place2 = (b1 + b2) % LARGEST;
			place3 = a1 + a2 + place1;
			a1 = a2, a2 = place3;
			b1 = b2, b2 = place2;
			printf("%lu%0101lu", a2, b2);
		}
		else 
		{
			place2 = b1 + b2;
			b1 = b2, b2 = place2;
			printf("%lu", b2);
		}
		if (count != 97)
		{
			printf(", ");
		}
	}
	printf("\n");
	return (0);
}

