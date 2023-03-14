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
	int i, j, len, n_words;
	char *tmp = str, **words, *words_start, *word;

	if (str == NULL || *str == '\0')
	{
		return (NULL);
	}

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

	n_words = 0;
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

		words_start = tmp;
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
					free(*word[j]);
				}
				free(word);
				return (NULL);
			}

			strncpy(word, words_start, len);
			word[len] = '\0';
			words[i] = word;
			++i;
		}
	}

	words[n_words] =  NULL;
	return (words);
}
