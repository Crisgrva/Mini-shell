#include "main.h"

/**
 * _strdup -  returns a pointer to a newly allocated space in memory.
 * @str: string
 * Return: Always 0.
 */

char *_strdup(char *str)
{
	int i;
	int j = 0;
	char *new_s;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
	{
	}
	i++;

	new_s = malloc(i * sizeof(char));

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
