#include "main.h"
/***
 * printDir - prints the current working directory
 * @cwd: holds the path name for the current working directory
 * return - returns noting 
 */
void printDir()
{
	char cwd[1024];
	getcwd(cwd, sizeof(cwd));
	printf("\nDir: %s", cwd);
}
