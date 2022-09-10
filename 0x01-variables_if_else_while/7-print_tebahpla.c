#include <stdio.h>

/**
 * main - Prints the alphabets in reverse
 *
 * Return: 0
 *
 */
int main(void)
{
	char m;

	for (m = 'z' ; m >= 'a' ; m--)
	{
		putchar(m);
	}
	putchar('\n');
	return (0);
}
