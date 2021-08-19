#include "main.h"

/**
 * main - UNIX command line interpreter.
 * Usage: simple_shell
 * Return: On success always 0
 */

int main()
{
	char *prompt = "cuchufli% ";
	int input = 0, (*funct)();
	char *line = NULL, **tokens = NULL, *path;
	size_t line_size = 0;

	while (1)
	{
		write(STDOUT_FILENO, prompt, _strlen(prompt));
		input = getline(&line, &line_size, stdin);

		if (input == -1)
		{
			if (errno == EINVAL || errno == ENOMEM)
				perror("./hsh");
			write(1, "\n", 1);
			free(line);
			return (0);
		}

		tokens = token(line, " \n");

		if (tokens == NULL)
		{
			free(tokens);
			free(line);
			return (1);
		}

		funct = get_builtin(tokens[0]);
		if (funct != NULL)
		{
			if (funct() == 1)
				return (0);
			continue;
		}

		path = find_path(tokens);
		if (path == NULL)
		{
			perror("./hsh");
			return (-1);
		}

		if (fork_process(path, tokens, environ) == 1)
			return (1);
	}
	return (0);
}
