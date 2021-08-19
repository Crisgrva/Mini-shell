#include "main.h"
/**
* get_builtin - Function that look for a builtin (env, exit, etc)
* Return: ALways(liss[j].func) (success)
*/
int (*get_builtin(char *string))()
{
	unsigned int j = 0;
	while (list[j].name != NULL)
	{
		if (_strcmp(string, list[j].name) == 0)
			return (list[j].func);
		j++;
	}
	return (list[j].func);
}

int env(void)
{
	int i;
	for (i = 0; environ[i]; i++)
	{
		write(1, environ[i], _strlen(environ[i]));
		write(1, "\n", 1);
	}
	return (0);
}

int _own_exit()
{
	exit(1);
}
