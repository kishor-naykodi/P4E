#include <stdio.h>
#include <stdlib.h>

struct stack
{
    int size;
    int top;
    int* arr;
};

int isEmpty(struct stack* ptr){
    if(ptr->top == -1){
        return 1;
    }else{
        return 0;
    }
}
int isFull(struct stack* ptr){
    if(ptr->top == ptr->size-1){
        return 1;
    }else{
        return 0;
    }
}

int main(int argc, char const *argv[])
{
    // struct stack s;
    // s.size = 80;
    // s.top = -1;
    // s.arr = (int*)malloc(s.size * sizeof(int));
    struct stack *s;
    s->size = 80;
    s->top = -1;
    s->arr = (int*)malloc(s->size * sizeof(int));

    //Checking stack is empty or not
    // int status = isEmpty(s);
    int status = isFull(s);
    printf("%d",status);
    return 0;
}
