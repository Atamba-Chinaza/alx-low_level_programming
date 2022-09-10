#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - Prints digits two two
 *
 * Return: 0
 *
 */
int main(void)
{
	int p, g;

	for (p = 0 ; p <= 98 ; p++)
	{
		for (g = p + 1 ; g <= 99 ; g++)
		{
			putchar((p / 10) + '0');
			putchar((p % 10) + '0');
			putchar(' ');
			putchar((g / 10) + '0');
			putchar((g % 10) + '0');

			if (p == 98 && g == 99)
				continue;
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
