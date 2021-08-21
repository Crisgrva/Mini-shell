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

/*---------------------------------------------------------*/

/* MACROS */
#define SIGINT 2
extern char **environ;
extern int errno;

/*---------------------------------------------------------*/

/* PROTOTYPES */

/*-----Main functions-----*/
int shell_interactive(void);
int shell_no_interactive(int ac, char **av);

/*-----String functions-----*/
int _strlen(char *string);
int _strcmp(char *s1, char *s2);
char *_strncmp(char *PATH, char *MATCH, size_t n);
int count_words(char *str);
char *_strdup(char *str);
char *_strcat(char *dest, char *src);
char *_itoa(int i, char *strout, int base);

/*-----Aux functions-----*/
char **tokenizer(char *s, char *delim);
int (*get_builtin(char *string))();
int fork_process(char *path, char **tokens, char **environ);
char *find_path(char **tokens);
char *prompt_no_interactive(char *name_file);
char *prompt_interactive(char *name_file);
void handle_sigint(int sig);

/*-----Error_messages-----*/
void path_error(int numerr, char **tokens, char *name_file);
void permission_error(int numerr, char **tokens, char *name_file);

/*-----Built-ins-----*/
int _own_exit(void);
int env(void);

/*---------------------------------------------------------*/

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


#endif
