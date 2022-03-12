#include <stdio.h>
#include <stdlib.h>

void greet1(void (*fptr)(char *))
{
    char username[] = {"Kishor"};
    printf("Welcome to C programming\n");
    fptr(username);
}

void greet2(char *str)
{
    printf("Dear %s", str);
}

int main(int argc, char const *argv[])
{
    void (*fptr)(char[]);
    fptr = &greet2;

    greet1(fptr);
    return 0;
}
