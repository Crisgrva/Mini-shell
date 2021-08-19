#include "main.h"

int fork_process(char *token, char **tokens, char **environ)
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
		if (execve(tokens[0], tokens, environ) == -1)
		{
			perror("./hsh");
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
