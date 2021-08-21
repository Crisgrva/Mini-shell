#include "main.h"

/**
 * handle_sigint - function that handle signal Ctrl + C to not quit.
 * @sig: signal received.
 * Returns: nothing.
 */

void handle_sigint(int sig)
{
	char *prompt = "cuchufli% ";

	write(1, "\n", 1);
	write(STDOUT_FILENO, prompt, _strlen(prompt));

	(void)sig;
}
