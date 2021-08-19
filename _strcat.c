#include "main.h"

/**
* *_strcat - function that concatenates two strings
*
* @dest: string one
* @src: string two
*
* Return: concatenated string
*/

char *_strcat(char *dest, char *src)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
	{	}

	for (j = 0; src[j] != '\0'; j++)
	{
		dest[i] = src[j];
		i++;
	}

	return (dest);
}