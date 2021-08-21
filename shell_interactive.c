#include "main.h"

/**
 * shell_interactive - UNIX command line interpreter.
 * Usage: simple_shell
 * Return: On success always 0
 */

int shell_interactive(void)
{
	char *line = NULL, **tokens = NULL, *path = NULL;
	int (*funct)(), numerr = 0;
	char *name_file = "./hsh";

	while (1)
	{
		signal(SIGINT, handle_sigint);
		line = prompt_interactive(name_file);

		if (line == NULL)
			return (0);

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
				free(line);
				numerr++;
				path_error(numerr, tokens, name_file);
				continue;
			}
		}
		else
			path = tokens[0];

		if (fork_process(path, tokens, environ) == 1)
		{
			free(line);
			numerr++;
			permission_error(numerr, tokens, name_file);
			continue;
		}
		free(line);
		free(tokens);
	}
	return (0);
}