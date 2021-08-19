#include "main.h"

int _compare(const char *X, const char *Y)
{
	while (*X && *Y)
	{
		if (*X != *Y)
			return (0);

		X++;
		Y++;
	}

	return (*Y == '\0');
}

const char *_strstr(const char *X, const char *Y)
{
	while (*X != '\0')
	{
		if ((*X == *Y) && _compare(X, Y))
		{
			return (X);
		}
		X++;
	}

	return (NULL);
}
