#include "main.h"

int _strlen(char *string)
{
	int i = 0;
	while (string[i])
		i++;
	return (i);
}
