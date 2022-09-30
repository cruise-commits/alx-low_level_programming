
#include "main.h"

/**
* _strcmp - compare strin *s1 and *s2
*
* @s1: param
* @s2: param
*
* Return: 0 if false and 1 if true
*/

	int _strcmp(char *s1, char *s2)
{
	while ((*s1 != '\0' && *s2 != '\0') && *s1 == *s2)
{
	s1++;
	s2++;
}
	if (*s1 == *s2)
{
	return (0);
}
	else
{
	return (*s1 - *s2);
}
}
