#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: To print negative and positive random numbers
 *
 * Return: always 0 (Succes)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf(n, "is positive")
	}else if (n == 0){
		printf(n, "is zero")
	}else {
		printf(n, "is negative")
	}

	return (0);
}
