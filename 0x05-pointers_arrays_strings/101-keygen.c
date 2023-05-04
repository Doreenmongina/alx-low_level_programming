#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - generates random valid passwords for the program 101-crackme
 *Return: 0 (success)
 */

int main(void)
{
	/**
	 *  Seed the random number generator with the current time
	 *  srand(time(NULL));
	 *  Define the valid characters for the password
	 */
	const char* valid_chars = "0123456789abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ!@#$%^&*()-_=+[{]}\\|;:'\",<.>/?";

	/* define the length of the password */
	const int password_length = 10;

	/* Generate the password */
	char password[password_length + 1];
	for (int i = 0; i < password_length; i++) 
	{
		password[i] = valid_chars[rand() % strlen(valid_chars)];
	}
	password[password_length] = '\0';

	/* Print the password */
	printf("Password: %s\n", password);

	return 0;
}
