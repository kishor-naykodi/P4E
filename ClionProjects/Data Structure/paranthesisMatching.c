#include <stdio.h>
#include <stdlib.h>

struct stack
{
    int size;
    int top;
    char* arr;
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

void push(struct stack* ptr,char value){
    if(isFull(ptr)){
        printf("Stack overflow.\n");
    }
    else{
        ptr->top++;
        ptr->arr[ptr->top] = value;
    }
}
char pop(struct stack* ptr){
    if(isEmpty(ptr)){
        printf("Stack Underflow.\n");
    }
    else{
        char popElement = ptr->arr[ptr->top];
        ptr->top--;
        return popElement;
    }
}

int parenthesisMatch(char * exp,struct stack* sp){

    for (int i = 0; exp[i] != '\0'; i++)
    {
        if(exp[i] == '('){
            push(sp,'(');
        }else if(exp[i] == ')'){
            if(isEmpty(sp)){
                return 0;
            }
            pop(sp);
        }
    }
    if(isEmpty(sp))
        return 1;
    return 0;
    
}

int main(int argc, char const *argv[])
{

    struct stack *sp;
    sp->size = 80;
    sp->top = -1;
    sp->arr = (char*)malloc(sp->size * sizeof(char));

    char * exp= "8*(9)"; 
    int match = parenthesisMatch(exp,sp);

    //Printing paranthesis matching or not.
    if(match == 1){
        printf("The parenthesis is matching");
    }else{
        printf("Parenthesis not Matching");
    }


    return 0;
}
