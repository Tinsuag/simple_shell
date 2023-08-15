#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stddef.h>
#include <unistd.h>
#include <strings.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <readline/history.h>
#include <readline/readline.h>

#define MAXCOM 1000
#define MAXLIST 100

#define clear() printfO("\033[H\033[J")

void init_shell(void);
void execute(char **argv);
char *_getline(char *lineptr, size_t n);
char *path_(char *command);
#endif /*MAIN_H*/
