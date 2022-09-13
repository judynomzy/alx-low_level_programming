#include <stdio.h>
/**
 * main-entry point
 *
 * Return:always return 0
 *
 */
int main (void)
{
	char a;
	int i;

	for (i = 0; i < 10; i++)
	{
		printf("%d", i);
	}
	for (a = 'a'; a <= 'z'; a++)
	{
		printf("%c", a);
	}
	printf("\n");
	return (0);
}
