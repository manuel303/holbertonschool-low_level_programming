#include <stdio.h>
#include <stdlib.h>
/**
 *main - main function ---> lowercase & capital letter
 *Return: 0
 *Description: for loops
 */
int main(void)
{
	char calp;
	for (calp = 'a'; calp <= 'z'; calp++)
	{
		putchar(calp);
	}
	for (calp = 'A'; calp <= 'Z'; calp++)
	{
		putchar(calp);
	}
	putchar('\n');
	return (0);
}
