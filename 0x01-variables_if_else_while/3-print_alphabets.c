#include <stdio.h>
#include <string.h>
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
		putchar(a);
	for (a = 'A'; a <= 'Z'; a++)
		putchar(a);
	putchar("%c\n");
	return (0);
}
