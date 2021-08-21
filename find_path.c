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
	int i = 0, j = 1;
	char *path = NULL, *new_path = NULL, **path_tokenized = NULL, *realloc_path = NULL;
	size_t length_newpath = 0;

	for (i = 0; environ[i]; i++)
	{
		if (_strncmp(environ[i], "PATH", 4) != NULL)
		{
			path = _strdup(environ[i]);
			break;
		}
	}

	path_tokenized = tokenizer(path, "=:");

	for (j = 1; path_tokenized[j]; j++)
	{
		new_path = _strdup(path_tokenized[j]);
		if (new_path == NULL)
		{
			free(path);
			free(new_path);
			return (NULL);
		}
		length_newpath = (_strlen(tokens[0]) + _strlen(new_path) + 2);
		realloc_path = realloc(new_path, length_newpath);
		if (realloc_path == NULL)
		{
			free(path);
			free(new_path);
			return (NULL);
		}
		_strcat(realloc_path, "/");
		_strcat(realloc_path, tokens[0]);

		if (access(realloc_path, F_OK) == 0)
		{
			free(path);
			/* Free(new_path) forbiden -> Valgrind */
			return (realloc_path);
		}
		else
		{
			/* free(new_path); forbiden -> Valgrind*/
			free(realloc_path);
		}
	}
	/* free(realloc_path); forbiden -> Valgrind*/
	free(path);
	return (NULL);
}
