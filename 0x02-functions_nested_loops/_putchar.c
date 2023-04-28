#include <unistd.h>

/**
 * _putchar  - writes the character c to stdout
 * @C: the character to print
 * Return: 1 on success
 * on error -1 is returned and the error is set appropriately
 */

int _putchar(char c)
{
	return(write(1, &c, 1));
}		

