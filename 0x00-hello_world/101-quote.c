#include <stdio.h>
#include <unistd.h>

/**
 * main - print quote
 *
 * Description: prints Dora's quote
 * Return: Alawys 1 (Success)
 */
int main(void)
{
	write(1, "and that place of art is useful\" - Dora korpar,2015-10-19\n", 59);
	return (1);
}
