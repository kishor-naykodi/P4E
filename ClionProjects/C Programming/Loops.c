#include <stdio.h>
int main()
{
    // do while
    int n, sum = 0;
    do
    {  
        printf("Enter a number: ");
        scanf("%i", &n);
        sum += n;
    }
    while(n != 0);
    printf("Sum is = %d \n",sum);


// While loop
int i = 0;
    while (i<5)
    {
        printf("%d\t", i);
        i = i+1;
    }

// For loop
    int num = 10;
    int j;
    for(j = 0; j < num; j++) { 
    printf("%d ",j);
    }
    return 0;
}

