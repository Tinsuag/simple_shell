#include "main.h"

int takeInput(char *str)
{
	char *buf;

	butf = readline("\n$ ");
	if (strlen(buf) != 0)
	{
		add_history(buf);
		strcpy(str, buf);
		return (0);
	}
	else
	{
		return (1);
	}
}
