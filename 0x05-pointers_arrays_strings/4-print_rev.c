#include "main.h"
#include <string.h>
/**
 * print_rev - to print a string in reverse, followed by a line
 * @s: pointer to be used in the function
 */
void print_rev(char *s)
{
	int len = strlen(s);

	for (int i = len - 1; i >= 0; i--)
	{
		putchar(s[i]);
	}
	putchar('\n');
}
