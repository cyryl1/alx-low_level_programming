#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * leet - Encodes a string into 1337
 * @str: The input string to encode
 *
 * Return: A pointer to the encoded string
 */
char *leet(char *str)
{
	char *enc_str;
	int i, j;
	char letters[] = "aeotl";
	char numbers[] = "43071";

	enc_str = malloc(sizeof(char) * (strlen(str) + 1));
	if (enc_str == NULL)
		exit(1);

	for (i = 0; str[i] != '\0'; i++)
	{
		enc_str[i] = str[i];
		for (j = 0; j < 5; j++)
		{
			if (str[i] == letters[j] || str[i] == letters[j] - 32)
			{
				enc_str[i] = numbers[j];
				break;
			}
		}
	}

	enc_str[i] = '\0';

	return (enc_str);
}
