#include "main.h"

void execute(char **argv)
{
char *command = NULL, *command_v2;
if (argv)
{
command = argv[0];
command_v2 = path_(command);
if (execve(command_v2, argv, NULL) == (-1))
{
perror("Error");
}
}
}
