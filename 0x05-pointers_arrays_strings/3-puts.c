#include "main.h"

/**
 * _puts - print string followed by a new line
 *
 *  @str: param
 *
 * Return: always 0
*/

void _puts(char *str)
{
	for (; *str != '\0'; str++)
	{
		_putchar(*str);
	}

	_putchar('\n');
}
