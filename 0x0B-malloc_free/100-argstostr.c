#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 * argstostr - concatenates all arguments of the program
 *
 * @ac: arguments 1
 * @av: arguments 2
 *
 * Return: conctenated string
 */
char *argstostr(int ac, char **av)
{
	char *str;
	int i, j, len = 0, pos;

	if (ac == 0 || av == 0)
	{
		return (NULL);
	}

	for (i = 0; i < ac; i++)
	{
		len += strlen(av[i]) + 1;
	}

	str = malloc(sizeof(char) * (len + 1));
	if (str == NULL)
	{
		return (NULL);
	}

	pos = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			str[pos++] = av[i][j];
		}
		str[pos++] = '\n';
	}

	str[pos] = '\0';
	return (str);
}
