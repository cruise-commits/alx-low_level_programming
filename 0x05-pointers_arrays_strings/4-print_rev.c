#include "main.h"

/**
 * print_rev - print string followed by a new line
 *
 *  @s: param
 *
 * Return: always 0
*/

void print_rev(char *s)
{
	int i = 0;

	int len;

	for (len = 0; s[len] != '\0'; len++)
	{
	}

	for (i = len - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
