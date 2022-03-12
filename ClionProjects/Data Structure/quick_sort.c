#include <stdio.h>

void printArray(int *A, int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", A[i]);
    }
    printf("\n");
}

int partition(int A[], int low, int high)
{
    int i = low + 1;
    int j = high;
    int pivot = A[low];
    int temp;
    //2, 4, 3, 9, 1, 4, 8, 7, 5, 6
    do
    {
        while (A[i] <= pivot)
        {
            i++;
        }
        while (A[j] > pivot)
        {
            j--;
        }
        if (i < j)
        {
            temp = A[i];
            A[i] = A[j];
            A[j] = temp;
        }
    } while (i < j);

    temp = A[low];
    A[low] = A[j];
    A[j] = temp;

    return j;
}

void quickSort(int A[], int low, int high)
{
    int partitionIndex;
    if (low < high)
    {
        partitionIndex = partition(A, low, high);
        quickSort(A, low, partitionIndex - 1);
        quickSort(A, partitionIndex + 1, high);
    }
}

int main(int argc, char const *argv[])
{
    int A[] = {2, 4, 3, 9, 1, 4, 8, 7, 5, 6};
    int size = 10;
    printArray(A, size);
    quickSort(A, 0, 9);
    printArray(A, size);
    return 0;
}
