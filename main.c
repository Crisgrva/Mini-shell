#include "main.h"

extern char **environ;
extern int errno;

int main()
{
	char *prompt = "cuchufli% ";
	int input = 0;
	int child = 0;
	char *line = NULL;
	size_t lineSize = -1;
	char **tokens = NULL;

	extern int errno;

	while (1)
	{
		write(STDOUT_FILENO, prompt, _strlen(prompt));

		input = getline(&line, &lineSize, stdin);

		/* Si getline falla se libera line y termina el programa */
		if (input == -1)
		{
			if (errno == EINVAL || errno == ENOMEM)
			{
				perror("./hsh");
			}
			write(1, "\n", 1);
			free(line);
			return (0);
		}
		tokens = token(line);

		if (tokens == NULL)
		{
			free(tokens);
			free(line);
			return (1);
		}

		child = fork();
		if (child < 0)
		{
			return (1);
		}
		if (child == 0)
		{
			if (execve(tokens[0], tokens, environ) == -1)
			{
				free(line);
				perror("./hsh");
				return (1);
			}
		}
		else
		{
			wait(NULL);
			free(tokens);
		}
	}
	return (0);
}
