#include <stdio.h>
/**
 * main-entry point
 *
 * Return: always returns 0
 *
 */
int main(void)
{
	char a;

	for (a = 'a'; a <= 'z'; a++)
		printf("%c", a);
	for (a = 'A'; a <= 'Z'; a++)
		printf("%c", a);
	return (0);
}
