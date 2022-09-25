#include "main.h"

/**
 * swap_int - swap values from two integers
 *
 * @a: param
 * @b: param
 *
 * Return: void(no return type
*/

void swap_int(int *a, int *b)
{
	*a = *a + *b;
	*b = *a - *b;
	*a = *a - *b;
}
