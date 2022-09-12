#include <stdio.h>
/**
 * main-entry point
 *
 * Return: always return 0
 *
 */
int main(void)
{
	char a;

	for (a = 'a'; a <= 'z'; a++)
	{
		if (a == 'q' || a == 'e')
		{
			continue;
		}
		printf("%c", a);
	}
	printf("\n");
	return (0);
}
