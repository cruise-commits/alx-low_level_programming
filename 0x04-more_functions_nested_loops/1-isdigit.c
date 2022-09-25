#include "main.h"

/**
 * _isdigit - function returns 1 idf param is a digot and 0 when false
 * @c: param name
 * Return: 1 if true and 0 if false
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	return (0);
}

