#include <stdio.h>

int main(int argc, char const *argv[])
{
    FILE *fp;
    fp = fopen("myfile.txt", "r+");

    char str[55];

    // fputc('C', fp);
    // fputs("This is Kishor. I am going to learn file handling.", fp);

    char c = fgetc(fp);
    printf("This is character read from file : %c\n", c);

    fgets(str, 55, fp);
    printf("%s", str);

    fclose(fp);

    return 0;
}
