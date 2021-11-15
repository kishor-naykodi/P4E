#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    char *operation;
    int num1, num2;

    operation = argv[1];
    num2 = atoi(argv[3]);
    num1 = atoi(argv[2]);

    if (strcmp(operation, "add") == 0)
    {
        printf("The addition of num1 and num2 is : %d\n", num1 + num2);
    }
    else if (strcmp(operation, "sub") == 0)
    {
        printf("The Substraction of num1 and num2 is : %d\n", num1 - num2);
    }
    else if (strcmp(operation, "multi") == 0)
    {
        printf("The multiplication of num1 and num2 is : %d\n", num1 * num2);
    }
    else if (strcmp(operation, "div") == 0)
    {
        printf("The division of num1 and num2 is : %d\n", num1 / num2);
    }
    else
    {
        printf("You have entered wrong operation.");
    }

    return 0;
}
