#include <stdio.h>

/**
 * main - Entry point
 * description: a program that prints numbers of base 16 in lowercase
 *Return: 0 (success)
 */
int main(void)
{
	char lc;
	int num;

	for (num = 0; num < 10; num++)
		putchar((num % 10) + '0');

	for (lc = 'a'; lc <= 'f'; lc++)
		putchar(lc);

	putchar('\n');

	return (0);
}



