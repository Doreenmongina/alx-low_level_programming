#include <stdio.h>

/**
 * main - Entry point
 * prints the alphabet in lowercase
 * Return: Always 0 (Success)
 */
int main(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
	if (i != 'q' && i != 'e')
	putchar(i);
	}
	putchar('\n');

	return (0);
}
