#include "main.h"

/**
*  print_number - prints an interger
* 
*  @n: param
* 
* Return:  void
**/

	void print_number(int n)
{
	unsigned int num = n;

	_putchar((num % 10) + '0');
}
