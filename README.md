# Simple Shell
***
In this project we were assigned to make a functional Shell, with its basic commands.
***

## Table of contents
***
1.  [General info](#general-info)
2.  [How to install?](#how-to-install)
3.  [Files of our Shell!](#files-of-our-shell)
4.  [How does it work?](#how-does-it-work)
5.  [Commands that works!](#commands-that-works)
6.  [Test cases!](#test-cases)
7.  [Authors!](#authors)

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
| File | Description |
|-----|-----|
| main.c |Function that checks if our Shell is called in interactive or non-interactive mode.|
| main.h | Header file with prototypes and structures.|
| handle_sigint.c |Function that handle signal Ctrl + C to not quit.|
| fork_process | Function that creates a child process.|
| find_path | Function that searches the PATH in user environment.|
| error_messages.c | Function that prints error messages related to "not found" and "permission denied".|
| count_words.c | Function that counts words depending on delimiters.|
| builtins.c | Function that look for a builtin (env and exit).|
| _strncmp.c | Function that compares two strings.|
| _strlen.c | Function that gets the length of a string.|
| _strcmp.c | Function that compares two strings.|
| _strdup.c | Function that duplicates a string.|
| _strcat.c | Function that concatenates two strings.|
| _itoa.c | Function that reverse a string.|
| prompt.c | Function prints a prompt and gets a string from command line.|
| shell_interactive.c | UNIX command line interpreter that works in interactive mode.|
| shell_no_interactive.c | UNIX command line interpreter that works in non-interactive mode.|
| tokenizer.c |Function that split a string.|

***

## How does it work?
***
![](https://github.com/yazgiraldoa/printf/blob/master/Flowchart.png)

***

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
***

## Test cases!
***

### Interactive mode!

#### ls
```sh
cuchufli% ls ..
holbertonschool-low_level_programming
simple-shell
printf
yazmin

cuchufli% ls -l ..
total 16
drwxrwxr-x 24 yazmin yazmin 4096 ago 18 08:50 holbertonschool-low_level_programming
drwxrwxr-x  6 yazmin yazmin 4096 ago 21 11:04 simple-shell
drwxrwxr-x  3 yazmin yazmin 4096 ago 18 21:30 printf
drwxrwxr-x  3 yazmin yazmin 4096 ago 18 10:07 yazmin
```

#### pwd

```sh
cuchufli% pwd
/home/yazmin/repo/simple-shell
```

#### cat

```sh
cuchufli% cat iacta
Alea iacta est

Alea iacta est ("The die is cast") is a Latin phrase attributed by Suetonius
(as iacta alea est) to Julius Caesar on January 10, 49 BC
as he led his army across the Rubicon river in Northern Italy. With this step,
he entered Italy at the head of his army in defiance of the Senate and began
his long civil war against Pompey and the Optimates. The phrase has been
adopted in Italian (Il dado è tratto), Romanian (Zarurile au fost aruncate),
Spanish (La suerte está echada), French (Les dés sont jetés), Portuguese (A
sorte está lançada), Dutch (De teerling is geworpen),
German (Der Würfel ist gefallen), Hungarian (A kocka el van vetve) and many other languages to
indicate that events have passed a point of no return.

Read more: https://en.wikipedia.org/wiki/Alea_iacta_est
```

### Non-Interactive mode!

#### ls
```sh
yazmin@tp:~/repo/simple-shell$ echo "ls .." | ./hsh
holbertonschool-low_level_programming  simple-shell  printf  yazmin
```

#### pwd
```sh
yazmin@tp:~/repo/simple-shell$ echo "pwd" | ./hsh
/home/yazmin/repo/simple-shell
```

#### cat
```sh
yazmin@tp:~/repo/Mini-shell$ echo "cat Iacta" | ./hsh
Alea iacta est

Alea iacta est ("The die is cast") is a Latin phrase attributed by Suetonius
(as iacta alea est) to Julius Caesar on January 10, 49 BC
as he led his army across the Rubicon river in Northern Italy. With this step,
he entered Italy at the head of his army in defiance of the Senate and began
his long civil war against Pompey and the Optimates. The phrase has been
adopted in Italian (Il dado è tratto), Romanian (Zarurile au fost aruncate),
Spanish (La suerte está echada), French (Les dés sont jetés), Portuguese (A
sorte está lançada), Dutch (De teerling is geworpen),
German (Der Würfel ist gefallen), Hungarian (A kocka el van vetve) and many other languages to
indicate that events have passed a point of no return.

Read more: https://en.wikipedia.org/wiki/Alea_iacta_est
```

***

## Authors!
***
**Yazmin Giraldo** - @yazgiraldoa -
<a href = 'https://www.twitter.com/@yazgiraldoa'> <img width = '18px' align= 'center' src="https://raw.githubusercontent.com/rahulbanerjee26/githubAboutMeGenerator/main/icons/twitter.svg"/></a>
<a href = 'https://www.github.com/yazgiraldoa'> <img width = '18px' align= 'center' src="https://raw.githubusercontent.com/rahulbanerjee26/githubAboutMeGenerator/main/icons/github.svg"/></a>

**Cristian Granada** - @Crisgrva -
<a href = 'https://www.twitter.com/@Crisgrva'> <img width = '18px' align= 'center' src="https://raw.githubusercontent.com/rahulbanerjee26/githubAboutMeGenerator/main/icons/twitter.svg"/></a>
<a href = 'https://github.com/Crisgrva'> <img width = '18px' align= 'center' src="https://raw.githubusercontent.com/rahulbanerjee26/githubAboutMeGenerator/main/icons/github.svg"/></a>

**Ibethe Ramada** - @IbetheRamada -
<a href = 'https://www.twitter.com/@AkimashitaGa'> <img width = '18px' align= 'center' src="https://raw.githubusercontent.com/rahulbanerjee26/githubAboutMeGenerator/main/icons/twitter.svg"/></a>
<a href = 'https://github.com/IbetheRamada'> <img width = '18px' align= 'center' src="https://raw.githubusercontent.com/rahulbanerjee26/githubAboutMeGenerator/main/icons/github.svg"/></a>
***
