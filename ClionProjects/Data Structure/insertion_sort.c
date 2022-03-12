#include <stdio.h>
void printArray(int *A, int size){
    for (int i = 0; i < size; i++)
    {
        printf("%d ",A[i]);
    }
    printf("\n");
    
}

void insertionSort(int *A, int size){
    int key,j;
    for (int i = 1; i < size; i++)
    {
        key = A[i];
        j=i-1;                         //12 | 54,65,7,23, 9
        while(j>=0 && A[j]>key){
            A[j+1] = A[j];
            j--;
        }
        A[j+1] = key;
    }
    
}

int main(int argc, char const *argv[])
{
    int A[] = {12,54,65,7,23, 9};
    int size = 6;
    printArray(A,size);
    insertionSort(A,size);
    printArray(A,size);
    return 0;
}
