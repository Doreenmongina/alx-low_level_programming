#include "main.h"
#include <stdio.h>

/**
 * swap_int - swap two variable intergers
 * Return: 0 (success)
 * @a: integer to swap
 * @b: integer to swap
 */

void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
