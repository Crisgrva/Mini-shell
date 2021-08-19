#include "main.h"

/**
 * find_path - function that searches the PATH in env
 * Return:
 */

char *find_path(char **tokens)
{
	int i = 0;
	int j = 0;
	char *path = NULL;
	char *new_path = NULL;
	char **path_tokenized = NULL;

	for (i = 0; environ[i]; i++)
	{
		if (_strncmp(environ[i], "PATH", 4) != NULL)
		{
			path = _strdup(environ[i]);
			break;
		}
	}

	path_tokenized = token(path, "=:");

	for (j = 1; path_tokenized[j]; j++)
	{
		new_path = _strdup(path_tokenized[j]);
		_strcat(new_path, "/");
		_strcat(new_path, tokens[0]);

		if (access(new_path, F_OK) == 0)
		{
			return (new_path);
		}
	}
	return (NULL);
}
