#include "main.h"

/**
 * main - UNIX command line interpreter.
 * Usage: simple_shell
 * Return: On success always 0
 */

int main(void)
{
	char *line = NULL, **tokens = NULL, *path = NULL, *strerrnum = NULL;
	int (*funct)(), numerr = 0;
	char buffer[1024];

	while (1)
	{
		signal(SIGINT, handle_sigint);
		line = prompt();

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
				numerr++;
				strerrnum = _itoa(numerr, buffer, 16);
				write(1, "./hsh: ", 8);
				write(1, strerrnum, _strlen(strerrnum));
				write(1, ": ", 2);
				write(1, tokens[0], _strlen(tokens[0]));
				write(1, ": not found\n", 13);
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
