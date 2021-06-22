#include <stdio.h>
/**
 * main - Prints combination of numbers
 * Description - Prints ascending orders with two digits
 * Return: Always (Success)
 */
int main(void)
{
	int d1, d2;

	for (d1 = 0; d1 <= 8; d1++)
	{
		for (d2 = 1; d2 <= 9; d2++)
		{
			if (d1 < d2)
			{
				putchar(d1 + 48);
				putchar(d2 + 48);

				if (!(d1 == 8 && d2 == 9))
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
