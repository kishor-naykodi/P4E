#include <stdio.h>
#include <stdlib.h>

struct stack
{
    int size;
    int top;
    int *arr;
};

void createArray(struct stack* ptr,int size){
    ptr->size = size;
    ptr->top = -1;
    ptr->arr = (int *)malloc(ptr->size * sizeof(int));
    printf("Stack has been created successfully\n");
}

void printStack(struct stack* ptr){
    for (int i = 0; i <= ptr->top;i++)
    {
        printf("%d\n",ptr->arr[i]);
    }
    
}

int isEmpty(struct stack* ptr){
    if(ptr->top == -1){
        return 1;
    }else{
        return 0;
    }
}
int isFull(struct stack* ptr){
    if(ptr->top == ptr->size){
        return 1;
    }else{
        return 0;
    }
}

void push(struct stack* ptr,int value){
    if(isFull(ptr)){
        printf("Stack overflow.\n");
    }
    else{
        ptr->top++;
        ptr->arr[ptr->top] = value;
    }
}
int pop(struct stack* ptr){
    if(isEmpty(ptr)){
        printf("Stack Underflow.\n");
    }
    else{
        int popElement = ptr->arr[ptr->top];
        ptr->top--;
        return popElement;
    }
}

int peek(struct stack* ptr,int index){
    int arrInd = ptr->top-index;
    if ((arrInd)<0)
    {
        printf("Invalid Index");
        return -1;
    }
    
    return ptr->arr[arrInd];
}

int stackTop(struct stack* sp){
    return sp->arr[sp->top];
}
int stackBottom(struct stack* sp){
    return sp->arr[0];
}

int main()
{
    struct stack* sp = (struct stack *) malloc(sizeof(struct stack));
    createArray(sp,10);
    push(sp,7);
    push(sp,8);
    push(sp,12);
    printf("Stack before pop.\n");
    printStack(sp);
    int ele = pop(sp);
    printf("Stack after pop.\n");
    printStack(sp);
    printf("%d",peek(sp,2));
    return 0;
}
