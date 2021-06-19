#include <stdio.h>

/**
 * main - entry point
 *
 * Description: digits of base 16 +++> lowercase
 * Return: 0
 */
int main(void)
{
	char hx;

	for (hx = '0'; hx <= '9'; ++hx)
		putchar(hx);
	for (hx = 'a'; hx <= 'f'; ++hx)
		putchar(hx);

	putchar('\n');

	return (0);
}
