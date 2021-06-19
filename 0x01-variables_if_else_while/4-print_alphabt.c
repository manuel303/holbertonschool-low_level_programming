#include <stdio.h>
#include <stdlib.h>
/**
 *main - main function
 *Return: 0
 *Description: if else while
 */

int main(void)
{
	char lox;
	for (lox = 'a'; lox <= 'z'; lox++)
	{
		if (lox == 'q' || lox == 'e')
		{
			lox++;
		}
		putchar(lox);
	}
	putchar('\n');
	return (0);
}
