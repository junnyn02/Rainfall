#include <stdio.h>
#include <stdlib.h>

char *gets(char *s);

void    run()
{
    printf("Good... Wait what");
    system("/bin/sh");
}

int main()
{
    char input[76];

    gets(input);
    return 0;
}