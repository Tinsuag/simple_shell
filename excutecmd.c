#include "main.h"

void execute(char **argv)
{
char *path = "/usr/bin/";

if (argv)
{
if (execve(path, argv, NULL) == (-1))
{
perror("Error:");
}
}
}
