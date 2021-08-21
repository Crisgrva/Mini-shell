#include <stdio.h>

int main(int ac, char **av)
{
	int i = 0;

	printf("Last argument -> %s\n", av[ac - 1]);
	return (0);
}
