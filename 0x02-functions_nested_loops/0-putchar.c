#include "main.h"
#include <unistd.h>
/**
 * main - Entry point
 *
 * Return: always 0 (success)
 */
int main(void)
{
	_putchar("_putchar\n");
	return (0);
}

int _putchar(char c)
{
	return (write(1, &c, 1));
}
