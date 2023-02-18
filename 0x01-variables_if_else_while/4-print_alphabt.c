#include <stdio.h>
/**
 * main- Entry Point
 *
 * Description: print all alpabet except q and e
 *
 * Return: always 0 (Success)
 */

int main(void) {
	char letters = 'a';

	while (letters <= 'z')
	{
		if (letters != 'e' && letters != 'q')
		{
			putchar(letters);
		}
		letters++;
	}
	putchar('\n');
	return (0);
