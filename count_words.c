#include "main.h"
#define OUT 0
#define IN 1

/**
 * count_words - function that counts words depending on delimiters
 * @str: string to be evaluated.
 * Return: number of words in the string.
 */

int count_words(char *str)
{
	int state = OUT;
	unsigned int wc = 0;

	while (*str)
	{
		if (*str == ' ' || *str == '\n' || *str == '\t'
			|| *str == ':' || *str == '=')
			state = OUT;

		else if (state == OUT)
		{
			state = IN;
			++wc;
		}
		++str;
	}
	return (wc);
}
