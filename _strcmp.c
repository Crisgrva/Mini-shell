#include "main.h"

/**
* _strcmp - function that compares two strings.
* @s1: string 1 to compare.
* @s2: string 2 to compare.
* Return: 0 if strings are equal, 1 if strings are different.
*/

int _strcmp(char *s1, char *s2)
{
	int k = 0, equal = 0, dif = 0, len1 = _strlen(s1), len2 = _strlen(s2);

	for (k = 0; s1[k] != '\0' && s2[k] != '\0'; k++)
	{
		if (s1[k] == s2[k])
		{
			equal++;
		}
		if (s1[k] != s2[k])
		{
			dif++;
		}
	}

	if (dif > 0 || len1 != len2)
		return (1);

	return (0);
}
