#include "main.h"

/**
 * find_path - function that searches the PATH in env
 * Return:
 */

char *find_path(char **tokens)
{
	int i = 0;
	char *path = NULL;
	char **path_tokenized = NULL;
	for (i = 0; environ[i]; i++)
	{
		if (_strncmp(environ[i], "PATH", 4) != NULL)
		{
			path = _strdup(environ[i]);
		}
	}

	printf("path -> %s\n", path);
	path_tokenized = token(path, "=:");

	for (i = 0; path_tokenized[i]; i++)
	{
		// _strcat(path_tokenized[i], tokens[0]); - quedó mal - revisar luego de comer
		printf("otro path -> %s\n", path_tokenized[i]);
	}

	/**	Bitácora de asdasmda
	 *	Se tokenizó el path ahora está imprimiendo así:
	 *  otro path -> /usr/local/sbin
	 *  otro path -> /usr/local/bin
	 *  otro path -> /usr/sbin
	 *  otro path -> /usr/bin
	 *  otro path -> /sbin
	 *  otro path -> /bin
	 *
	 *	Proceso a seguir, verificar si el programa se encuentra
	 *  en el path ej: "ls" ? -> "/usr/bin"
	 *  Sí es así, enviarle la ruta completa a execve
	 */
	return (NULL);
}
