#include <stdio.h>
#include <stdlib.h>
/**
 *main - Entry point
 *Return: 0
 *
 */
int main(void)
{
	int _num;
	for (_num = '0'; _num <= '9' ; _num++)
	{
		putchar(_num);
		if (_num != '9')
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
