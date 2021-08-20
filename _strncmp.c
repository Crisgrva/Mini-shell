#include "main.h"

/**
* _strncmp - function that compares two strings.
* @path: string 1 to compare.
* @match: string 2 to compare.
* @n: number of characteres to take into account.
* Return: 0 if strings are equal, 1 if strings are different.
*/

char *_strncmp(char *path, char *match, size_t n)
{
	while (n && *path && (*path == *match))
	{
		++path;
		++match;
		--n;
	}
	if (n == 0)
	{
		return (path);
	}
	else
	{
		return (NULL);
	}
}
