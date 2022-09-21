#include "main.h"

/**
 * puts2 - prints one char out of 2 of a string
 * @str: a pointer to string
 * Return: nothing
 */

void puts2(char *str)
{
	int i;
	int size = 0;

	while (str[size] != '\0')
	{
		size++;
	}

	for (i = 0; i < size; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
