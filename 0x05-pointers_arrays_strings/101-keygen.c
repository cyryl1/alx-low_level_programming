#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 * Return: 0 always (success)
 */
int main (void)
{
	int i;
	char password[10];
	srand(time(NULL));

	for (i = 0; i < 10; i++)
	{
		password[i] = rand() % 94 + 33;
	}

	printf("%s\n", password);
	return (0);
}
