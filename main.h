#ifndef MAIN_H
#define MAIN_H

/* STD LIBRARIES */
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/wait.h>
#include <errno.h>
#include <stddef.h>
#include <unistd.h>
#include <signal.h>
/*------------------*/

/* MACROS */
#define SIGINT 2
extern char **environ;
extern int errno;
/*------------------*/

/* PROTOTYPES */
int _strlen(char *string);
int _strcmp(char *s1, char *s2);
char *_strncmp(char *PATH, char *MATCH, size_t n);
int count_words(char *str);
char *_strdup(char *str);
char *_strcat(char *dest, char *src);
char *_itoa(int i, char *strout, int base);

char **tokenizer(char *s, char *delim);
int (*get_builtin(char *string))();
int fork_process(char *path, char **tokens, char **environ);
char *find_path(char **tokens);
char *prompt(void);
void handle_sigint(int sig);
/*------------------*/

/* BUILT-INS */
int _own_exit(void);
int env(void);
/*------------------*/

/*STRUCTURES*/

/**
*struct builtin - builtin structures.
*@name: a char with a name of a file.
*@func: a int that call.
*/

typedef struct builtin
{
	char *name;
	int (*func)();
} built_in;

static const built_in list[] = {
	{"env", env},
	{"exit", _own_exit},
	{NULL, NULL}};
/*------------------*/

/* TRASH */
/* const char *_strstr(const char *X, const char *Y);*/
/* int _compare(const char *X, const char *Y);*/
/*------------------*/

#endif
