#include "main.h"

void execute(char **argv)
{
char *command = NULL;

if (argv)
{
command = argv[0];
if (execve(command, argv, NULL) == (-1))
{
perror("Error:");
}
}
}
