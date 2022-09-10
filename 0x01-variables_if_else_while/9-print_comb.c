#include <stdio.h>

/**
 * main - patience persistence and perspiration
 * Return: 0 if success
 */

int main(void)
{
	int n;
	n = 48;

	while (n <= 57)
	{
		putchar (n);

		if (n != 57)
		{
			putchar(',');
			putchar(' ');
		}
		n++;
	}
	
	putchar ('\n');
	return (0);
}
