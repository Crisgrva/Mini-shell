#include "main.h"

int main(void)
{
	char *name_file = NULL;
	if (isatty(STDIN_FILENO) == 1)
		return (name_file = "./hsh");
	else
		return (name_file = av[ac - 1]);
}