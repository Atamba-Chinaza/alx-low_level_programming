#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - prints different combinations of three numbers
 * 
 * Return: 0
 *
 */
int main(void)
{
	int d, p, r;
	for (d = '0' ; d < '9' ; d++)
	{
		for (p = d + 1 ; p <= '9' ; p++)
		{
			for (r = p + 1 ; r <= '9' ; r++)
			{
				if ((p != d) != r)
				{
					putchar(d);
					putchar(p);
					putchar(r);
					if (d == '7' && p == '8')
						continue;
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
