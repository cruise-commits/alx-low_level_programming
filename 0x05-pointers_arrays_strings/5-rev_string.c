#include "main.h"

/**
 * rev_string - reverse a string
 *
 * @s: params
 *
 * Return: void return type
*/

void rev_string(char *s)
{
	int i = 0;
	int j = 0;
	int t = 0;
	char tmp;

	for (; s[i] != '\0'; i++)
	{

	}

	t = i - 1;

	for (j = 0; j < i / 2; j++)
	{
		tmp = s[j];
		s[j] = s[t];
		s[t--] = tmp;
	}

}
