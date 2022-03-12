#include <stdio.h>

int changeValue(int *a){

    *a = 111;
}

int main(int argc, char const *argv[])
{
    int a = 55;

    printf("The value of a is %d \n",a);

    changeValue(&a);

    printf("After calling function the value of a is %d",a);
    return 0;
}
