#include "main.h"
/**
 * prompt - Function that prints prompt and
 * get string from prompt
 * Return: char pointer that contain prompt string
 */
char *prompt(void)
{
	char *prompt = "cuchufli% ", *line = NULL;
	int input = 0;
	size_t line_size = 0;

	if (isatty(STDIN_FILENO) == 1)
	{
		write(STDOUT_FILENO, prompt, _strlen(prompt));
		input = getline(&line, &line_size, stdin);
	}
	else
		input = getline(&line, &line_size, stdin);

	if (input == -1)
	{
		if (isatty(STDIN_FILENO) == 1)
			write(1, "\n", 1);

		if (errno == EINVAL || errno == ENOMEM)
		{
			perror("./hsh");
		}
		free(line);
		return (NULL);
	}
	return (line);
}
