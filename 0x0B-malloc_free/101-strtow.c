#include "main.h"
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/**
 * strtow - splits a string into words
 * @str: input string
 *
 * Return: pointer to an array of strings (words), or NULL on failure
 */
char **strtow(char *str)
{
        int i, j, num_words = 0, word_index = 0, word_length = 0, start_index;
	char **words, *words

	if (str == NULL || str == '\0')
		return (NULL);

        for (i = 0; i < strlen(str); i++)
        {
                if (!isspace(str[i]) && (i == 0 || isspace(str[i - 1])))
                        num_words++;
        }

        words = malloc((num_words + 1) * sizeof(char *));
        if (words == NULL)
                return (NULL);

        for (i = 0; i < strlen(str); i++)
        {
                if (!isspace(str[i]))
                        word_length++;
                else if (word_length > 0)
                {
			word = malloc((word_length + 1) * sizeof(char));
                        if (word == NULL)
                        {
                                for (j = 0; j < word_index; j++)
                                        free(words[j]);
                                free(words);
                                return (NULL);
                        }

                        start_index = i - word_length;
                        for (j = 0; j < word_length; j++)
                                word[j] = str[start_index + j];
                        word[word_length] = '\0';
                        words[word_index] = word;
                        word_index++;
                        word_length = 0;
                }
        }

        if (word_length > 0)
        {
                word = malloc((word_length + 1) * sizeof(char));
                if (word == NULL)
                {
                        for (j = 0; j < word_index; j++)
                                free(words[j]);
                        free(words);
                        return (NULL);
                }

                start_index = strlen(str) - word_length;
                for (j = 0; j < word_length; j++)
                        word[j] = str[start_index + j];
                word[word_length] = '\0';
                words[word_index] = word;
                word_index++;
        }
	words[word_index] = NULL;
	return (words);
}
