#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Positive anything is better than negative nothing
 * Return: 0 if success
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n < 0)
	{
		printf("%d is %s\n", n, " is negative");
	}
	else if (n > 0)
	{
		printf("%d is %s\n", n, " is positive");
	}
	else
	{
		printf("%d is %s\n", n, " is zero");
	}
	return (0);

}
