#include "main.h"

char *path(char *command)
{
char *path, *path_cpy, *command_path, *delim = ":", *path_token;
char *file_path;
int command_length = 0, i, directory_length;
path = getenv("PATH");
path_cpy = strdup(path);
command_length = strlen(command);
path_token = strtok(path_cpy, ":");
directory_length = strlen(path_token);
file_path = malloc(command_length + directory_length +2);
strcpy(file_path, path_token);
strcat(file_path, "/");
strcat(file_path, command);
strcat(file_path, "\0");
printf("%s", file_path);
return (file_path);
}