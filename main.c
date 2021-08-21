#include "main.h"

/**
 * main - function that checks if our Shell is called
 * in interactive or non-interactive mode.
 * @ac: number of arguments passed (non-interactive)
 * @av: double pointer with arguments passed (non-interactive)
 * Return: 0 on success.
 */

int main(int ac, char **av)
{
	if (isatty(STDIN_FILENO) == 1)
		shell_interactive();
	else
		shell_no_interactive(ac, av);

	return (0);
}
