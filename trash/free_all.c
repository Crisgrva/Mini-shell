#include "main.h"

void free_all()
{
	int i = 0;

	for (i = 0; test[i] != NULL; i++)
		free(test[i]);

	printf("After 1. -> %s\n", test[0]);
	printf("After 2. -> %s\n", test[1]);
	printf("After 3. -> %s\n", test[2]);
}

// 1. line
// 2. tokens = splited_words
// 3. path (srtdup)4
// 4. new_path (srtdup)
// 5. realloc_path
