#include "main.h"
#define OUT 0
#define IN 1
int count_words(char *str)
{
	int state = OUT;
	unsigned wc = 0;

	while (*str)
	{
		if (*str == ' ' || *str == '\n' || *str == '\t')
			state = OUT;

		else if (state == OUT)
		{
			state = IN;
			++wc;
		}
		++str;
	}
	return wc;
}

/**
 * token - Function that split a sing
 * @s: string to split
 * Return: a **char that contain splits words
 */

char **token(char *s)
{
	int i, cword;
	char **splited_words = NULL;

	cword = count_words(s);
	splited_words = malloc(sizeof(char *) * cword);

	splited_words[0] = strtok(s, " ");

	for (i = 1; i <= cword; i++)
		splited_words[i] = strtok(NULL, " ");

	splited_words[i] = NULL;
	return (splited_words);
}