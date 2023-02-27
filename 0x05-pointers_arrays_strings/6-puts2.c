
#include "main.h"
/**
 * puts2 _ To print every other character of a string
 * @str: pointer used in the function
 *
 * Return: void
 */
void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i += 2;)
	{
		putchar(str[i]);
	}
	putchar('\n');
}
