#include <stdio.h>

int fact(int num);

int main(int argc, char const *argv[])
{
    int num;
    printf("Enter a no whose factorial you have to find");
    scanf("%d",&num);
    printf("factorial of %d is %d",num,fact(num));
    return 0;
}

int fact(int num){
    if(num==0 || num==1)
        return 1;
    else{
        return num * fact(num-1);
    }

}