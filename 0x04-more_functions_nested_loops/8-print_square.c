#include <stdio.h>
#include "main.h"

/**
 * print_square - prints squares
 * @size: parameter
 *
 * Return: Always 0
 */

void print_square(int size)
{
	int inc1, inc2;

	if (size > 0)
	{
		for (inc1 = 1; inc1 <= size; inc1++)
		{
			for (inc2 = 1; inc2 <= size; inc2++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
