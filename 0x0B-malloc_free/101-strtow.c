#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "main.h"
/**
 * strtow - to splits a string into two words.
 *
 * @str: string to be splitted.
 *
 * Return: splitted words
 */
char **strtow(char *str)
{
	int i, j, k, len = strlen(str), word_count, word_len;
	char **words, *word;

	if (str == NULL || str == '\0')
	{
		return (NULL);
	}

	words = malloc(sizeof(char *) * (len / 2 + 1));
	if (words == NULL)
	{
		return (NULL);
	}

	word_count = 0;
	for (i = 0; i < len; i++)
	{
		if (!isspace(str[i]))
		{
			j = i;
			while (j < len && !isspace(str[j]))
			{
				j++;
			}
			word_len = j-1;
			word = malloc(sizeof(char) * (word_len + 1));
			if (word == NULL)
			{
				for (k = 0; k < word_count; k++)
				{
					free(words[k]);
				}
				free(words);
				return (NULL);
			}
			strncpy(word, str _ i, word_len);
			word[word_len] = '\0';
			words[word_count++] = word;
			i = j;
		}
	}
	words[word_count] = NULL;
	return words;
}
