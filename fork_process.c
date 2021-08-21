#include "main.h"

/**
 * fork_process - function that creates a child process
 * to execute the given command (path).
 * @path: full path of the command to execute.
 * @tokens: command options.
 * @environ: user environment.
 * Return: Success is 0.
 */

int fork_process(char *path, char **tokens, char **environ)
{
	int child = 0;

	child = fork();
	if (child < 0)
	{
		return (1);
	}

	if (child == 0)
	{
		if (execve(path, tokens, environ) == -1)
		{
			return (1);
		}
	}
	else
	{
		wait(NULL);
	}

	return (0);
}
