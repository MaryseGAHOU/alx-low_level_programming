#include "main.h"

/**
 * puts2 - prints one char out of 2 of a string
 * @str: a pointer to string
 * Return: nothing
 */

void puts2(char *str)

	int i;
	int len = _strlen(str);

	for (i = 0; i < len; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
