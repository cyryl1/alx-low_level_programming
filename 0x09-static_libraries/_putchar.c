#include "main.h"
#include <unistd.h>
/**
 * _putchar - for printing characters
 * @c: charcter to be printed
 *
 * Return: write(1, &c, 1);
 */
int _putchar(char c)
{
	return write(1, &c, 1);
}
