#include "main.h"

/**
 * token - Function that split a sing
 * @s: string to split
 * Return: a **char that contain splits words
 */

char **token(char *s, char *delim)
{
	int i = 0;
	int cword = 0;
	char **splited_words = NULL;

	cword = count_words(s);

	splited_words = malloc(sizeof(char *) * (cword + 1));
	if (splited_words == NULL)
	{
		perror("./hsh");
		return (NULL);
	}

	splited_words[0] = strtok(s, delim);

	for (i = 1; i < cword; i++)
	{
		splited_words[i] = strtok(NULL, delim);
	}

	return (splited_words);
}
