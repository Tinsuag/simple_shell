#include "main.h"
/***
 * parsePipe - searches for pipe and get the string piped
 */
int parsePipe(char *str, char **strpiped)
{
	int i;
	for (i = 0; i < 2; i++)
	{
		strpiped[i] = strsep(&str, "|");
		if (strpiped[i] == NULL)
			break;
	}
	if (strpiped[1] == NULL)
		return (0);
	else
		return (1);
}
