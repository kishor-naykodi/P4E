#include <stdio.h>

int arr1[3][3];
int arr2[3][3];
int arr3[3][3];

void setArray(int arr[3][3])
{
    printf("Enter the values for arr: \n");

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
}

void getArray(int arr[3][3])
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}

void arrMulti(int arr1[3][3], int arr2[3][3])
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            arr3[i][j] = 0;
            for (int k = 0; k < 3; k++)
            {
                arr3[i][j] += arr1[i][k] * arr2[k][j];
            }
        }
    }
}

void printArrMulti(int arr3[3][3])
{
    printf("The mulitplication of arr1 and arr2 is : \n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", arr3[i][j]);
        }
        printf("\n");
    }
}

int main(int argc, char const *argv[])
{
    setArray(arr1);
    getArray(arr1);
    setArray(arr2);
    getArray(arr2);
    arrMulti(arr1, arr2);
    printArrMulti(arr3);
    return 0;
}
