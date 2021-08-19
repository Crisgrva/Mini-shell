#include "main.h"
#define OUT 0
#define IN 1

int count_words(char *str)
{
	int state = OUT;
	unsigned wc = 0;

	while (*str)
	{
		if (*str == ' ' || *str == '\n' || *str == '\t' || *str == ':' || *str == '=')
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
