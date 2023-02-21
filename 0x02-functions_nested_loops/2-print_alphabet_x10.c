#include "main.h"
/**
 * print_alphabet_x10: To print lowercase alphabets 10 times
 */

void print_alphabet_x10(void)
{
	char alphabets = 0, letters;

	while (alphabets < 10)
	{
		letters = 'a';
		while (letters <= 'z')
		{
			_putchar(letters);
			letters++;
		}

		_putchar('\n');
		alphabets++;
	}
}
/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int_putchar(char c)
{
	return(write(1, &c, 1));
}
