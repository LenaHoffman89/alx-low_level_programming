#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * main - prints the sum of positive numbers
 * @argc: argument count
 * @argv: array of argument
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i;
	unsigned int k, sum = 0;
	char *c;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			c = argv[i];
			for (k = 0; k < strlen(c); k++)
			{
				if (c[k] < 48 || c[k] > 57)
				{
					printf("Error\n");
					return (1);
				}
			}
			sum += atoi(c);
			c++;
		}
		printf("%d\n", sum);
	}
	else
	{
		printf("0\n");
	}
	return (0);
}
