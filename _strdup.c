#include "main.h"

/**
 * _strdup -  function that duplicates a string
 * in a newly allocated space in memory.
 * @str: string to be copied.
 * Return: Duplicated string in success.
 */

char *_strdup(char *str)
{
	int i = 0, j = 0;
	char *new_s = NULL;

	if (str == NULL)
		return (NULL);

	i = _strlen(str);

	new_s = malloc(sizeof(char) * (i + 1));

	if (new_s == NULL)
	{
		perror("./hsh");
		return (NULL);
	}

	if (i == 0 || new_s == 0)
		return (NULL);

	while (j < (i + 1))
	{
		new_s[j] = str[j];
		j++;
	}

	return (new_s);
}
