#include "main.h"

/**
 * main - UNIX command line interpreter.
 * Usage: simple_shell
 * Return: On success always 0
 */

int main(void)
{
	char *prompt = "cuchufli% ", *line = NULL, **tokens = NULL, *path = NULL;
	int input = 0, (*funct)();
	size_t line_size = 0;

	while (1)
	{
		if (isatty(STDIN_FILENO) == 1)
		{
			write(STDOUT_FILENO, prompt, _strlen(prompt));
			input = getline(&line, &line_size, stdin);
		}
		else
			input = getline(&line, &line_size, stdin);

		if (input == -1)
		{
			if (errno == EINVAL || errno == ENOMEM)
				perror("./hsh");
			free(line);
			return (0);
		}

		tokens = tokenizer(line, " \n");

		if (tokens == NULL)
			continue;

		funct = get_builtin(tokens[0]);
		if (funct != NULL)
		{
			if (funct() == 1)
				return (0);
			continue;
		}

		if (access(tokens[0], F_OK) != 0)
		{
			path = find_path(tokens);
			if (path == NULL)
			{
				free(path);
				perror("./hsh");
				continue;
			}
		}
		else
			path = tokens[0];

		if (fork_process(path, tokens, environ) == 1)
			return (1);
	}
	return (0);
}
