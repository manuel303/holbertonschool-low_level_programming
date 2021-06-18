#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * Main - Entry point--> number pos & neg
 * Description - Identify number
 * Return - 0 Success or End Run
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* number positive and negative */
	if (n > 0)
	{
		printf("%d Number is positive:\n", n);
	}
	else if (n == 0)
	{
		printf("%d Number is zero:\n", n);

	}
	else
	{
		printf("%d Number is negative:\n", n);
	}
	return (0);
}
