#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * main - entry point
 * rev_string - reverses a string
 * @s: pointer to the string to be reversed
 */
void rev_string(char *s)
{
	size_t len = strlen(s);
	char *p = s;
	char *q = s + len - 1;

	while (p < q)

	{
		char tmp = *p;
		*p++ = *q;
		*q-- = tmp;
	}
}
