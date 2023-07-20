#include "main.h"
#include <stdio.h>
/**
 * main - prints the numbers from 1 to 100, followed by
 * a new line but for multiplesof 3 print Fizz instead
 * of the number and for multiples of 5 print Buzz
 * Return: Always 0 (success)
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 != 0)
		{
			printf("Fizz");
		}
		else if (i % 5 == 0 && i % 3 != 0)
		{
			printf("Buzz");
		}
		else if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz");
		}
		else if (i == 1)
		{
			printf("%d", i);
		}
		else
		{
			printf("%d", i);
		}
		if (i < 100)
		{
			printf(" ");
		}
		else
		{
			printf("\n");
		}
	}
	printf("\n");
	return (0);
}
