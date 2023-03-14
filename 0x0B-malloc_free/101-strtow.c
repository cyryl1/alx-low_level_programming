#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * strtow - to split a string into words
 *
 * @str: string to be splitted.
 *
 * Return: words already splitted
 */
char **strtow(char *str)
{
	if (str == NULL || *str == '\0')
	{
		return (NULL);
	}

	int i, len, j, n_words = 0;
	char *tmp = str, **words, *word_start, *word;

	while (*tmp != '\0')
	{
		while (*tmp == ' ')
		{
			++tmp;
		}

		if (*tmp != '\0')
		{
			++n_words;
		}

		while (*tmp != ' ' && *tmp != '\0')
		{
			++tmp;
		}
	}

	words = malloc((n_words + 1) * sizeof(char *));
	if (words == NULL)
	{
		return (NULL);
	}

	i = 0;
	tmp = str;
	while (*tmp != '\0')
	{
		len = 0;
		while (*tmp == ' ')
		{
			++tmp;
		}

		word_start = tmp;
		while (*tmp != ' ' && *tmp != '\0')
		{
			++tmp;
			++len;
		}

		if (len > 0)
		{
			word = malloc((len + 1) * sizeof(char));
			if (word == NULL)
			{
				for (j = 0; j < i; ++j)
				{
					free(words[j]);
				}
				free(words);
				return (NULL);
			}

			strncpy(word, word_start, len);
			word[len] = '\0';
			words[i] = word;
			++i;
		}
	}

	words[n_words] =  NULL;
	return (words);
}
