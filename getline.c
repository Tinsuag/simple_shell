#include "main.h"

int main(int ac, char **argv)
{
char *lineptr;
size_t n = 0;
ssize_t nchar;
char *delim = " \n";
char *line_cpy = NULL;
int i = 0;
char *portion = NULL;
(void)ac;

while (1)
{
printf(":) ");
nchar = getline(&lineptr, &n, stdin);
if (nchar == -1)
{
perror("Exiting shell ... \n");
return (-1);
}
line_cpy = malloc(sizeof(char) * nchar);
if (line_cpy == NULL)
{
perror("tsh: memory allocation error");
return (-1);
}
strcpy(line_cpy, lineptr);
portion = strtok(line_cpy, delim);
for (i = 0; portion != NULL; i++)
{
argv[i] = malloc(sizeof(char) * sizeof(portion));
strcpy(argv[i], portion);
portion = strtok(NULL, delim);
}
argv[i] = NULL;
execute(argv);
}
free(lineptr);
free(line_cpy);
free(argv);
return (0);
}
