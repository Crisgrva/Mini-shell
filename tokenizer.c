#include "main.h"

/**
 * tokenizer - Function that split a string.
 * @s: string to split.
 * @delim: words delimiter.
 * Return: a char double pointer that contains splited words.
 */

char **tokenizer(char *s, char *delim)
{
	int i = 0, cword = 0;
	char **splited_words = NULL;

	cword = count_words(s);

	splited_words = malloc(sizeof(char *) * (cword + 1));
	if (splited_words == NULL)
	{
		perror("Error");
		return (NULL);
	}

	splited_words[0] = strtok(s, delim);

	if (splited_words[0] == NULL)
	{
		free(splited_words[0]);
		free(splited_words);
		return (NULL);
	}

	for (i = 1; i < cword; i++)
	{
		splited_words[i] = strtok(NULL, delim);
	}
	return (splited_words);
}
