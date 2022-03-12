#include <stdio.h>

void printArray(int *A, int size){
    for (int i = 0; i < size; i++)
    {
        printf("%d ",A[i]);
    }
    printf("\n");
    
}

void bubbleSort(int *A, int size){
    int isSorted;
    for (int i = 0; i < size-1; i++)
    {
        isSorted = 1;
        printf("Pass no: %d.\n",i+1);
        for (int  j = 0; j < size-1-i; j++)
        {
        if(A[j]>A[j+1]){
            int temp = A[j];
            A[j] = A[j+1];
            A[j+1] = temp;
            isSorted = 0;
        }
        }
        if (isSorted)
        {
            return;
        }
    }
    
}

int main(int argc, char const *argv[])
{
    // int A[] = {12,54,65,7,23, 9};
    int A[] = {1,2,3,4,6,5};
    int size = 6;
    printArray(A,size);
    bubbleSort(A,size);
    printArray(A,size);
    return 0;
}
