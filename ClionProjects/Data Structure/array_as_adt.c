#include <stdio.h>
#include <stdlib.h>

struct myArray
{
    int total_size;
    int used_size;
    int *ptr;
};

void createArray(struct myArray *arr,int tSize,int uSize){
    arr->total_size = tSize;
    arr->used_size = uSize;
    arr->ptr = (int*) malloc(tSize*sizeof(int));
}

void showArray(struct myArray *arr){
    printf("Printing your array...\n[");
    for (int i = 0; i < arr->used_size; i++)
    {
        if(i==arr->used_size-1){
            printf("%d",(arr->ptr)[i]);
        }else{
            printf("%d, ",(arr->ptr)[i]);}
    }
    printf("]\n");
    
}

void setValues(struct myArray * arr){
    for(int i=0; i < arr->used_size;i++){   
        printf("Enter element %d: ",i);
        scanf("%d",(arr->ptr + i));
    }
}

void setValue(struct myArray *arr){
    int index;
    int value;
    printf("Enter a index at which you have to store a value: ");
    scanf("%d",&index);
    printf("Enter a value at index %d: ",index);
    scanf("%d",&value);
    arr->ptr[index]= value;
}

int main()
{
    struct myArray marks;
    createArray(&marks,15,5);
    setValues(&marks);
    showArray(&marks);
    setValue(&marks);
    showArray(&marks);
    return 0;
}
