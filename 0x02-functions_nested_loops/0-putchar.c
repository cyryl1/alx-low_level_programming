#include "main.h"
#include <unistd.h>
/**
 * main - Entry point
 *
 * Return: always 0 (success)
 */
void main(void)
{
	char *str = "_putchar\n";
	int i;
i
	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}

	return (0);
}

int _putchar(char c)
{
	return (write(1, &c, 1));
}
