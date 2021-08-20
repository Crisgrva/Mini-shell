#include "main.h"

/**
 * _strdup -  returns a pointer to a newly allocated space in memory.
 * @str: string to be copied.
 * Return: Duplicated string in success.
 */

char *_strdup(char *str)
{
	int i = 0, j = 0;
	char *new_s = NULL;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
	{
	}
	i++;

	new_s = malloc(i * sizeof(char));
	if (new_s == NULL)
	{
		perror("./hsh");
		return (NULL);
	}

	if (i == 0 || new_s == 0)
		return (NULL);

	while (j < i)
	{
		new_s[j] = str[j];
		j++;
	}
	new_s[j] = '\0';
	return (new_s);
}
