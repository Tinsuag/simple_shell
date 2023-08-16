#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stddef.h>
#include <unistd.h>
#include <strings.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <sys/stat.h>
#include <readline/history.h>
#include <readline/readline.h>

#define MAXCOM 1000
#define MAXLIST 100

#define clear() printf("\033[H\033[J")

void init_shell(void);
void execute(char **argv);
void printDir();
int takeInput();
void execArgs(char **parsed);
void execArgsPiped(char **parsed, char **parsedpipe);
void openHelp(void);
int ownCmdHandler(char **parsed);
int parsePipe(char *str, char **strPiped);
void parseSpace(char * str, char **parsed);
int processString(char *str, char **parsed, char **parsedpipe);

char *_getline(char *lineptr, size_t n);
char *path_(char *command);
#endif /*MAIN_H*/
