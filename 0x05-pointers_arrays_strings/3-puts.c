#include "main.h"
#include <stdio.h>

/**
 * Main - entry point
 * _puts - print a string followed by a new line iin stdout
 */

void _puts(char *str)
{

	int i = 0;
	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
		_putchar('\n');
}
