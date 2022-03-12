#include <stdio.h>

int main(int argc, char const *argv[])
{
    FILE *ptr = NULL;
    char str[111];
    ptr = fopen("myFile.txt", "r");
    fgets(str, 55, ptr);
    printf("%s", str);
    return 0;
}
