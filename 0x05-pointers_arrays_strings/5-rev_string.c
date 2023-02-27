#include "main.h"
#include <string.h>
/**
 * rev_string - to reverse a string
 * @s: pointer to use in function
 */
void rev_string(char *s)
{
	char temp;
	int i, j;

	for (i = 0; j = strlen(s) - 1;  i < j; i++; j--)
	{
		temp = str[i];
		str[i] = str[j];
		str[j] = temp;
	}
}
