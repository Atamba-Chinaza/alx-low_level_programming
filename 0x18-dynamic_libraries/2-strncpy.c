#include "main.h"

/**
 * _strncpy - function that copies a string.
 * @n: size of character to contatenate
 * @dest: st1
 * @src: st2
 * Return:  0.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

		for (i = 0; i < n && src[i] != '\0'; i++)
			dest[i] = src[i];
		for ( ; i < n; i++)
			dest[i] = '\0';
	return (dest);
}
