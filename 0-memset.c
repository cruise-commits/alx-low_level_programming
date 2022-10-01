#include "main.h"

/**
*   _memset -  fills the first n bytes of the memory area pointed to by s
*  
*   @s: param s
*   @b: param b
*   @n: param n
*  
*   Return: return s
**/

	char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	i = 0;

	while (i < n)
{
	s[i] = b;
	i++;
}

	return (s);
}
