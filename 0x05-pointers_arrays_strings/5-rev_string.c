#include "main.h"
#include <string.h>
/**
 * rev_string - to reverse a string
 * @s: pointer to use in function
 */
void rev_string(char *s)
{
	char temp;

	int i = 0, j = strlen(s) - 1;
	while(i < j)
	{
		temp = s[i];
		s[i] = s[j];
		s[j] = trmp;
		i++;
		j--;
	}
}
