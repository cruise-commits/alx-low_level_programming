#include "main.h"

/**
*   _strchr - function that locates a character in a given string
*  
*   @s: param s
*   @c: param c
*  
*   Return: pointer to c
**/

	char *_strchr(char *s, char c)
{
	while (*s != '\0')
{
	if (*s == c)
										{
	return (s);
																}

	s++;
}
	if (*s == c)
{
	return (s);
}

	return (0);
}
