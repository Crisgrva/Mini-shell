#include "main.h"

/**
 * _strlen - function that gets the length of a string
 * @string: string to be evaluated.
 * Return: length of the string
 */

int _strlen(char *string)
{
	int i = 0;

	while (string[i])
		i++;

	return (i);
}
