# Simple Shell
***
In this project we were assigned to make a functional Shell, with its basic commands.
***

## Table of contents
***
1. [General info] (#general-info)
2. [How to install?] (#how_to_install)
3. [files of our Shell!] (#files_of_our_shell)
4. [Commands that works!] (#commands_that_works)
***

## General info
***
Our shell has as prompt "cuchuflí%", Yazmín's trace.

Our shell does what a shell normally does, it opens files with less, creates files with touch, you can modify files with vim, compile programs with gcc, list files and directories with ls, all this along with their flags.
***

## How to install?
***
Installing our Shell is quite easy, go to your terminal, write:
```sh
git clone https://github.com/yazgiraldoa/simple_shell.git
```
And it will be installed in minutes!
***
### Plus: how to open it?
Run the following command in your terminal:
```sh
 gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o hsh
```
it will compile the files and then you can execute the hsh program as follows : 
```sh
./hsh
```
***

## Files of our Shell!
***
| file | description |
|-----|-----|
| main.c | |
| main.h | |
| handle_sigint.c |function that handle signal Ctrl + C to not quit.|
| fork_process | function that creates a child process|
| find_path | function that searches the PATH in user environment,|
| error_messages.c | |
| count_words.c | function that counts words depending on delimiters|
| builtins.c | Function that look for a builtin (env, exit, etc).|
| _strncmp.c | function that compares two strings.|
| _strlen.c | function that gets the length of a string.|
| _strcmp.c | function that compares two strings.|
| _strdup.c | returns a pointer to a newly allocated space in memory.|
| _strcat.c | function that concatenates two strings|
| _itoa.c | Function that reverse a string|
| prompt.c | prompt_no_interactive - Function gets a string from command line. prompt_interactive - Function prints a prompt and gets a string from command line.|
| shell_interactive.c | |
| shell_no_interactive.c | |
| tokenizer.c |Function that split a string.|


## Commands that works!
***
| Command | Y/N |
| ------- | --- |
|   ls    | ✅ | 
|   pwd   | ✅ |
|   cd    | ❌ |
|   man   | ✅ |
|  hostname  | ✅ |
|   clear   | ✅ |
|   cp    | ✅ |
|  which  | ✅ |
|  whoami  | ✅ |
|  uname  | ✅ | 
|  passwd | ✅ |
|   df   | ✅ |
|  whatis  | ✅ |
|   top  | ✅ |
|  man  | ✅ |
|   diff   | ✅ |
|   sudo   | ✅ |
|  locate  | ✅ |
| basename | ✅ |
|   find   | ✅ |
|  less  | ✅ |
|  vim  | ✅ |
|  grep  | ✅ | 
|  find   | ✅ | 
|  touch  | ✅ |
|  cat  | ✅ | 
|  tail  | ✅ |
|  head  | ✅ |
|  chmod  | ✅ |
|   du    | ✅ |
|  more  | ❌ |
|   as    | ✅ |
|   mv    | ✅ |
|   rm    | ✅ |
|  mkdir | ✅ |
|  rmdir | ✅ |
|  exit  | ✅ |


