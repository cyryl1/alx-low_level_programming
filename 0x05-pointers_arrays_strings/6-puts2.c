
#include "main.h"
/**
 * puts2 _ To print every other character of a string
 * @str: pointer used in the function
 *
 * Return: void
 */
void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		printf("%c", str[i]);
		i += 2;
	}
	printf('\n');
}
