#include <stdio.h>

/**
 * main - Entry point
 * description: program that prints all combination of a single number
 * Return: 0 (Success)
 */

int main(void)

{
	int i;

	for (i = 48; i < 58; i++)
	{
		putchar(i);
		if (i != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}

