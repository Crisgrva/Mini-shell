#include <stdio.h>
#include "main.h"

int main()
{
	char *test0 = NULL, *test1 = NULL, *test2 = NULL;
	test0 = malloc(10);
	test1 = malloc(10);
	test2 = malloc(10);

	test[0] = test0;
	test[1] = test1;
	test[2] = test2;

	test1 = "Hola com0";
	test2 = "Hola com1";
	test3 = "Hola com2";

	printf("Before 0. -> %s\n", test[0]);
	printf("Before 1. -> %s\n", test[1]);
	printf("Before 2. -> %s\n", test[2]);

	free_all();

	return (0);
}
