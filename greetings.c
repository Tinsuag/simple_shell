#include "main.h"
/***
 * init_shell - is a function that create a greeting prompt
 * @username: holds the user name of the linux account
 * return - nothing
*/
void init_shell(void)
{
char *username;
clear();
printf("\n\n\n\n**************************");
printf("\n\n\n\t****simple-shell****");
printf("\n\n\n\n**************************");
username = getenv("USER");
printf("\n\n\nUSER is: @%s", username);
printf("\n");
sleep(1);
clear();
}
