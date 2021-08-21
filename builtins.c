#include "main.h"

/**
* get_builtin - Function that look for a builtin (env, exit, etc).
* @string: string to be evaluated as builtin.
* Return: A function associated with the builtin name (success).
*/

int (*get_builtin(char *string))()
{
	unsigned int j = 0;

	while (list[j].name != NULL)
	{
		if ((_strcmp(string, list[j].name)) == 0)
		{
			return (list[j].func);
		}
		j++;
	}
	return (NULL);
}

/**
 * env - function that prints environment variables.
 * Return: Success is 0
 */

int env(void)
{
	int i = 0;

	for (i = 0; environ[i]; i++)
	{
		write(1, environ[i], _strlen(environ[i]));
		write(1, "\n", 1);
	}
	return (0);
}

/**
 * _own_exit - function that exit the terminal.
 * Return: 1 as a flag to return in main function.
 */

int _own_exit(void)
{
	return (1);
}
