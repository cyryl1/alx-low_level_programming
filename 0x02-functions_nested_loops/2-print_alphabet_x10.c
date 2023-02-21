#include "main.h"
/**
 * Print: To print lowercase alhabets 10 times
 *
 */

void print_alphabet_x10(void)
{
	char alphabets = 0, letters;

	while (alphabets <= 10)
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
