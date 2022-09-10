#include <stdio.h>

/**
 * main - Inventing is a combination of brains and materials
 * Return: 0 if success
 */

int main(void)
{
	int a = '0';
	int b;

	while (a <= '9')
	{
		b = a + 1;

		while (b <= '9')
		{
			putchar(a);
			putchar(b);

			if (a == '8' && b == '9')
			{
				putchar('\n');
			}
			else
			{
				putchar(',');
				putchar(' ');
			}
			b++;
		}
		a++;
	}
	return (0);
}
