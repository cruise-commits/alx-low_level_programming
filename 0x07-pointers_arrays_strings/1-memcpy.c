#include "main.h"

/**
*  _memcpy - function returns dest
* 
*  @dest: param dest
*  @src: param src
*  @n: param n
* 
*  Return: return s
**/

	char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;

	while (i < n)
{
	dest[i] = src[i];
	i++;
}

	return (dest);
}
