#include "main.h"

/**
* _strcat - function that concatenates two strings
* @dest: string one where concatenated string is saved.
* @src: string two that will be copied in dest.
* Return: concatenated string.
*/

char *_strcat(char *dest, char *src)
{
	int i;
	int n;

	for (i = 0; dest[i] != '\0';)
	{
		i++;
	}

	for (n = 0; src[n] != '\0'; n++)
	{
		dest[i] = src[n];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
