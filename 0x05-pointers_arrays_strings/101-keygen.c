#include "main.h"
#include <stdio.h>
#include <time.h>

/**
 * main - generates random valid passwords for the program 101-crackme
 *Return: 0 (success)
 */

int main(void)
{

	int  pass[7];
	int i;

	srand (time (NULL));
	for (i = 0; i < 7; i++);

		pass[i] = rand () % 94 + 33;

	printf("%s\n", pass);

	return (0);

}
