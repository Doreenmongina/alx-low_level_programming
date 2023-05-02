#include "main.h"
#include <stdio.h>

/**
 * main - length of string
 * Return: length
 */

int _strlen(char *s)

{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}
	return (length);
}
