#include "main.h"

char *path_(char *command)
{
char *path, *path_cpy, *path_token;
char *file_path;
struct stat buffer;
int command_length = 0, directory_length;
path = getenv("PATH");
if (path){
path_cpy = strdup(path);
command_length = strlen(command);
path_token = strtok(path_cpy, ":");
directory_length = strlen(path_token);
file_path = malloc(command_length + directory_length +2);
strcpy(file_path, path_token);
strcat(file_path, "/");
strcat(file_path, command);
strcat(file_path, "\0");
if (stat(file_path, &buffer) == 0)
{
free(path_cpy);
return (file_path);
}
else
{
free (file_path);
path_token = strtok(NULL, "/");
}
free(path_cpy);
if (stat(command, &buffer) == 0)
{
    return (command);
}
return (NULL);
}
return (NULL);
}