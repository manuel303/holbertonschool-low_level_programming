#include <stdio.h>

/**
 * main - Prints combination of numbers
 *
 * Return: Always (Success)
 */
int main(void)
{
	int d1, d2;

	for (d1 = '0'; d1 <= '9'; d1++)
	{
		for (d2 = '0'; d2 <= '9'; d2++)
		{
			if (d1 < d2)
			{
				putchar(d1);
				putchar(d2);

				if (d1 != '8' || (d1 == '8' && d2 != '9'))
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}

	putchar('\n');

	return (0);
}
