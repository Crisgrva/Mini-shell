#include "main.h"

int fork_process(char *path, char **tokens, char **environ)
{
	int child = 0;

	child = fork();
	if (child < 0)
	{
		perror("./hsh");
		return (1);
	}
	if (child == 0)
	{
		if (execve(path, tokens, environ) == -1)
		{
			perror("ESTOY EN EL EXECVE");
			return (1);
		}
	}
	else
	{
		wait(NULL);
		free(tokens);
	}

	return (0);
}
