#include "main.h"

int read_command(char *buf, size_t n)
{
    *buf = malloc(sizeof(char) * n);
    printf(" ");
    getline(&buf, &n, stdin);
    return 0;
}

int main()
{
    size_t *n;
    char cmd[100], *command, *parameters[20];
    char *envp[] = { (char *) "PATH=/bin", 0};
    while ( 1 ) 
    {
        type_prompt();
        read_command (*command, n);
        if (fork() !=0)
            wait(NULL);
        else
        {
            strcpy (cmd, "/bin/");
            strcat(cmd, command);
            execve(cmd, parameters, envp);
        }
        if (strcmp ( command, "exit") == 0)
            break;
    }

    return (0);
}