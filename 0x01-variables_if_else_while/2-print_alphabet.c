#include <stdio.h>
#include <stdlib.h>
/**
 *main - alphabetic puchar
 *descritption - prints the alphabet in lowercase
 *Return: 0
 */
int main(void)
{
	char alp;

	for (alp = 'a'; alp <= 'z'; alp++)
	{
		putchar(alp);
	}
	putchar('\n');
	return (0);
}
