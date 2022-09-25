#include "main.h"

/**
 * _isupper - function that checks if input is uppercase letter
 * @c: parameter
 * Return: 1 if true and 0 if otherwise
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	return (0);
}
