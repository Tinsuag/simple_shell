#include "main.h"

int ownCmdHandler(char **parsed)
{
	int NoOfOwnCmds = 4, i, switchOwnA = 0;
	char *ListOfOwnCmds[NoOfOwnCmds];
	char *username;
	ListOfOwnCmds[0] = "exit";
	ListOfOwnCmds[1] = "cd";
	ListOfOwnCmds[2] = "help";
	ListOfOwnCmds[3] = "hello";

	for (i = 0; i < NoOfOwnCmds; i++)
	{
		if (strcmp(parsed[0], ListOfOwnCmds[i]) == 0)
		{
			switchOwnArg = i + 1;
			break;
		}	
	}
switch (switchOwnArgs)