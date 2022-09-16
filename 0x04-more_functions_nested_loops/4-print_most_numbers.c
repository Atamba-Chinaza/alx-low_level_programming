#include <stdio.h>
#include "main.h"

/**
 * print_most_numbers - prints numbers except 2and 4
 *
 * Return: returns something
 */

void print_most_numbers(void)
{
	int n;

	for (n = 48; n < 58; n++)
	{
		if ((n == 50) || (n == 52))
		{
			continue;
		}
		putchar(n);
	}
	putchar(10);
}
