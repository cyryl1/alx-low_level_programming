#include "main.h"
/**
 * print_alphabet_x10: To print lowercase alphabets 10 times, followed with a new line
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
