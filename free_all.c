#include "main.h"

/**
* free_all - function that frees memory of tokens
* @tokens: double pointer to be freed.
*/

void free_all(char **tokens)
{
	int i = 0;

	for (i = 0; tokens[i] != NULL; i++)
		free(tokens[i]);
	free(tokens);
}
