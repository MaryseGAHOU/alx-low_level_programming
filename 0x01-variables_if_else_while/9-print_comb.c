#include <stdio.h>

/**
 * main - Patience, persistence and perspiration
 * Return: 0 if success
 */

int main(void)
{
	int n;
	n = 48;

	while (n <= 57) /*57 corresponds with ASCII character 9*/
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
