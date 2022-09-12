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
		printf("%c\n", a);
	for (a = 'A'; a <= 'Z'; a++)
		printf("%c\n", a);
	return (0);
}
