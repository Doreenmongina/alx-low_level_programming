#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * Main - entry point
 * _puts(string): print a string to the console
 * string (str): the  string to print
 */

void _puts(char *str)
{

	int i = 0;

	while (str[i] != '\0')

	{
		putchar(str[i]);
		i++;
	}
		putchar('\n');
}
