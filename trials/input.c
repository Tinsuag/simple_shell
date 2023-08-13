#include "main.h"

int get_line(void)
{
	size_t n = 10;
	char *buf = malloc(sizeof(char) * n);

	printf(":$");
	getline(&buf, &n, stdin);
    return (0);
}