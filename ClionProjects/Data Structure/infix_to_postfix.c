#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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

int stackTop(struct stack* sp){
    return sp->arr[sp->top];
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

int isOperator(char c){
    if(c == '+' || c =='-' || c == '*' ||c == '/'){
        return 1;
    }
    return 0;
}

int checkPrec(char c){
    if(c == '*' || c == '/'){
        return 3;
    }else if( c == '+' || c == '-'){
        return 2;
    }else{
        return 0;
    }
}

char * infixToPostfix(struct stack* sp,char * infix){
    char * postfix = (char *) malloc((strlen(infix)+1) * sizeof(char));
    int i=0;
    int j=0;

    while(infix[i]!='\0'){
        if(!isOperator(infix[i])){
            postfix[j] = infix[i];
            i++;
            j++;
        }else{
            if(checkPrec(infix[i])>checkPrec(stackTop(sp))){
                push(sp,infix[i]);
                i++;
            }else{
                postfix[j] = pop(sp);
                j++;
            }
        }
    }

    while (!isEmpty(sp))
    {
        postfix[j] = pop(sp);
        j++;
    }
    
    postfix[j] = '\0';
    return postfix;
}

int main(int argc, char const *argv[])
{

    struct stack *sp;
    sp->size = 80;
    sp->top = -1;
    sp->arr = (char*)malloc(sp->size * sizeof(char));

    char * infix= "x-y/z-k*d"; 
    printf("Postfix is %s",infixToPostfix(sp,infix));

    return 0;
}
