#include "main.h"

/**
 * prompt_no_interactive - Function gets a string from command line.
 * @name_file: name of the executable file.
 * Return: char pointer that contains the string.
 */
char *prompt_no_interactive(char *name_file)
{
	char *line = NULL;
	int input = 0;
	size_t line_size = 0;

	input = getline(&line, &line_size, stdin);

	if (input == -1)
	{
		if (errno == EINVAL || errno == ENOMEM)
		{
			perror(name_file);
		}
		free(line);
		return (NULL);
	}
	return (line);
}

/**
 * prompt_interactive - Function prints a prompt and
 * gets a string from command line.
 * @name_file: name of the executable file.
 * Return: char pointer that contains the string.
 */

char *prompt_interactive(char *name_file)
{
	char *prompt = "cuchufli% ", *line = NULL;
	int input = 0;
	size_t line_size = 0;

	write(STDOUT_FILENO, prompt, _strlen(prompt));
	input = getline(&line, &line_size, stdin);

	if (input == -1)
	{
		if (errno == EINVAL || errno == ENOMEM)
		{
			perror(name_file);
		}
		write(1, "\n", 1);
		free(line);
		line_size = 0;
		return (NULL);
	}
	return (line);
}
