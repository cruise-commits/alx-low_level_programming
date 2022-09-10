#include <stdio.h>

/**
 * main - entry point.
 *
 * Return: Stop pragram by returnin 0.
 */
int main(void)
{
char letter;

for (letter = 'a'; letter <= 'z'; letter++)
		putchar(letter);
putchar('\n');

return (0);
}
