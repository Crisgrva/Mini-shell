#include "main.h"

char *_strncmp(char *PATH, char *MATCH, size_t n)
{
	while (n && *PATH && (*PATH == *MATCH))
	{
		++PATH;
		++MATCH;
		--n;
	}
	if (n == 0)
	{
		return (PATH);
	}
	else
	{
		return (NULL);
	}
}
