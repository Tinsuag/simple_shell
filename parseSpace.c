#include "main.h"

void parseSpace(char *str, char **parsed)
{
	int i;
	for (i = 0; i < MAXLITST; i++)
	{
		parsed[i] = strsep(&str, " ");
		if (parsed[i] == NULL)
			break;
		if (strlen(parsed[i]) == 0)
			i--;
	}
}
