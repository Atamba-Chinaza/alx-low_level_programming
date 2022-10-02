#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * @argc: argument count
 * @argv: argument vector
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int amt, bal, cent;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	bal = 0;
	amt = atoi(argv[1]);

	if (amt < 0)
	{
		printf("0\n");
		return (0);
	}

	while (amt)
	{
		if (amt >= 25)
			cent = 25;
		else if (amt >= 10)
			cent = 10;
		else if (amt >= 5)
			cent = 5;
		else if (amt >= 2)
			cent = 2;
		else
			cent = 1;

		bal += amt / cent;
		amt %= cent;
	}
	printf("%d\n", bal);
	return (0);
}
