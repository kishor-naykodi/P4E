#include <stdio.h>

void printArray(int *A, int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", A[i]);
    }
    printf("\n");
}

void merge(int A[], int mid, int low, int high)
{
    int i = low;
    int j = mid + 1;
    int k = low;
    int B[100];

    while (i <= mid && j <= high)
    {
        if (A[i] < A[j])
        {
            B[k] = A[i];
            i++, k++;
        }
        else
        {
            B[k] = A[j];
            j++, k++;
        }
    }
    while (i <= mid)
    {
        B[k] = A[i];
        k++, i++;
    }
    while (j <= high)
    {
        B[k] = A[j];
        k++, j++;
    }
    for (int i = 0; i <= high; i++)
    {
        A[i] = B[i];
    }
}

void mergeSort(int A[], int low, int high)
{
    int mid;
    if (low < high)
    {
        mid = (low + high) / 2;
        mergeSort(A, low, mid);
        mergeSort(A, mid + 1, high);
        merge(A, mid, low, high);
        // printArray(A, 5);
    }
}

int main(int argc, char const *argv[])
{
    int A[] = {7, 15, 2, 8, 10};
    printArray(A, 5);
    mergeSort(A, 0, 4);
    printArray(A, 5);
    return 0;
}
