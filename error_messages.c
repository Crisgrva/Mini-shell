#include "main.h"

/**
 * path_error - prints error message for command not found in PATH.
 * @numerr: number of error executed.
 * @tokens: arguments from command line.
 * @name_file: name of the file executed.
 */

void path_error(int numerr, char **tokens, char *name_file)
{
	char *strerrnum = NULL;
	char buffer[1024];

	strerrnum = _itoa(numerr, buffer, 10);
	write(1, name_file, _strlen(name_file));
	write(1, ": ", 2);
	write(1, strerrnum, _strlen(strerrnum));
	write(1, ": ", 2);
	write(1, tokens[0], _strlen(tokens[0]));
	write(1, ": ", 2);
	write(1, "not found\n", 11);
}

/**
 * permission_error - prints error message for permissions denied.
 * @numerr: number of error executed.
 * @tokens: arguments from command line.
 * @name_file: name of the file executed.
 */

void permission_error(int numerr, char **tokens, char *name_file)
{
	char *strerrnum = NULL;
	char buffer[1024];

	strerrnum = _itoa(numerr, buffer, 10);
	write(1, name_file, _strlen(name_file));
	write(1, ": ", 2);
	write(1, strerrnum, _strlen(strerrnum));
	write(1, ": ", 2);
	write(1, tokens[0], _strlen(tokens[0]));
	write(1, ": ", 2);
	perror("");
}
