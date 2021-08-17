#include "main.h"

extern char **environ;

int _strlen(char *string)
{
	int i = 0;
	while (string[i])
		i++;
	return (i);
}

int main()
{
	char *prompt = "cuchufli% ";
	char *line;
	int input = 0;
	int i = 0;
	size_t lineSize = 0;
	char **tokenizado = NULL;

	while (1)
	{
		write(STDOUT_FILENO, prompt, _strlen(prompt));
		input = getline(&line, &lineSize, stdin);

		/* Si getline falla se libera line y termina el programa */
		if (input == -1)
		{
			free(line);
			return (0);
		}

		tokenizado = token(line);

		free(tokenizado);
		free(line);
	}
	return (0);
}
