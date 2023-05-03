#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - generates random valid passwords for the program 101-crackme
 *Return: 0 (success)
 */

int main(void)
{

	char password[7];
	int i,

	sum = 0;

	srand (time (NULL));
	for (i = 0; i < 7; i++);

		password[i] = rand() % 94 + 33;

	print("%s\n", password);

	return (0);
}
