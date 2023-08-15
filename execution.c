#include "main.h"
/***
 * execArgs - is a function that executes system commands
 * @parsed - holds a parsed list of command string
 * return - nothing
 */
void execArgs(char **parsed)
{
	pid_t pid = fork();

	if (pid == -1)
	{
		printf(*\nFailed forking child..");
		return;
	}
	else if (pid == 0)
	{
		if(execvp(parsed[0], parsed) < 0)
		{
			printf("\n couldn't excute the command");
		}
		exit (0);
	}
	else 
	{
		wait(null);
		return;
	}
}
