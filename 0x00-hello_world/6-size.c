#include <stdio.h>
/**
 * main - program that prints the size of various types of variables
 * Return: 0 (success)
*/
int main()
{
	printf("Size of a char: %lu byte(s)\ni", sizeof(char));
	printf("Size of an int: %lu byte(s)\n", sizeof(int));
	printf("Size of a long int: %lu byte(s)\n", sizeof(long int));
	printf("Size of a long long int: %lu byte(s)\n", sizeof(long long int));
	printf("Size of a float: %lu byte(s)", sizeof(float));
	return (0);
}