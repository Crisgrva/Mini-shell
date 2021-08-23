#include "main.h"

/**
 * find_path - function that searches the PATH in user environment,
 * tokenize the PATH, concatenates the command to every tokenized path
 * and checks if the command exists.
 * @tokens: An array of pointers with all arguments.
 * Return: if command exists, returns the full path.
 */

char *find_path(char **tokens)
{
	int i = 0, j = 0;
	char *path = NULL, *new_path = NULL, **path_tokenized = NULL;

	for (i = 0; environ[i]; i++)
	{
		if (_strncmp(environ[i], "PATH", 4) != NULL)
		{
			path = _strdup(environ[i]);
			break;
		}
	}

	if (path == NULL)
		return (NULL);

	path_tokenized = tokenizer(path, "=:");

	for (j = 1; path_tokenized[j]; j++)
	{
		new_path = _strdup(path_tokenized[j]);
		_strcat(new_path, "/");
		_strcat(new_path, tokens[0]);

		if (access(new_path, F_OK) == 0)
		{
			free(path);
			return (new_path);
		}
	}
	free(path);
	return (NULL);
}
