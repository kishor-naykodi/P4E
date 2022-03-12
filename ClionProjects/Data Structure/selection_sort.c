#include <stdio.h>

void printArray(int *A, int size){
    for (int i = 0; i < size; i++)
    {
        printf("%d ",A[i]);
    }
    printf("\n");
    
}

void selectionSort(int* A, int size){
    for (int i = 0; i < size; i++)
    {   int minIndex = i;

        for (int j = i + 1; j < size; j++)
        {
            if(A[j] < A[minIndex]){
                minIndex = j;
            }
        }
        int temp = A[i];
        A[i] = A[minIndex];
        A[minIndex] = temp;
    }
    
}

int main(int argc, char const *argv[])
{
    int A[] = {0,8,7,1,3};
    printArray(A,6);
    selectionSort(A,6);
    printArray(A,6);
    return 0;
}
