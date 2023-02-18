#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: To prin both lowercase and uppercase letters
 *
 * Return: always 0 (Success)
 */

int main(void)
{
	char lower_case = 'a';
	char upper_case = 'A';

	do {
		putchar(lower_case);
		lower_case++;
	} while (lower_case <= 'z');

	do {
		putchar(upper_case);
		upper_case++;
	} while(upper_case <= 'Z');

	return (0);
}
