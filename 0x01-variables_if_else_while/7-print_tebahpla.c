#include <stdio.h>

/**
 * main -  Smile in the mirror
 * Return: 0 
 */

int main(void)
{
	char c;

	for (c = 'z' ; c >= 'a'; c--)
		putchar(c);

	putchar('\n');
	return (0);
}
