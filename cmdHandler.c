#include "main.h"

int ownCmdHandler(char **parsed)
{
	int NoOfOwnCmds = 4, i, switchOwnArg = 0;
	char *ListOfOwnCmds[4];
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
switch (switchOwnArg)
{
	case 1:
		printf("\nGoodbye\n");
		exit(0);
	case 2:
		chdir(parsed[1]);
		return (1);
	case 3:
		openHelp();
		return (1);
	case 4:
		username = getenv("USER");
		printf("\nHello %s. \nMind that this is not a place to ", username);
		printf("play around \n use help to know more..\n");
		return (1);
	default:
		break;
}
return (0);
}
