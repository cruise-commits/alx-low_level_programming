#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
  * print_alphabet - Prints the alphabet in lowercase
  *
  * Return: void
  */
void print_alphabet(void)
{
char c;

for (c = 'a'; c <= 'z'; c++)
{
putchar(c);
}

putchar('\n');
}

