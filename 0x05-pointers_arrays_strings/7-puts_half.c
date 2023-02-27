#include "main.h"
/**
 * puts_half - to print half of a string, followed by a new line
 * @str: the pointer used in the function
 *
 * Return: void
 */
void puts_half(char *str)
{
	int length = strlen(str);
	int start-index = length % 2 == 0 ? length / 2 : (length - 1) / 2 + 1;
	int i;

	for (i = start_index; i < length; i++)
	{
		printf("%c", str[i]);
	}
	printf("\n");
}
