#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node* next;
};
struct Node* top =NULL;

void linkedListTraversal(struct Node *ptr)
{
    while (ptr != NULL)
    {
        printf("Element: %d\n", ptr->data);
        ptr = ptr->next;
    }
}

int isEmpty(struct Node* top){
    if(top == NULL){
        return 1;
    }else{
        return 0;
    }
}
int isFull(struct Node* top){
    struct Node* p = (struct Node*)malloc(sizeof(struct Node));
    if(p == NULL){
        return 1;
    }else{
        return 0;
    }
}

struct Node* push(struct Node* top,int value){
    if(isFull(top)){
        printf("Stack Overflow.");
    }else{
    struct Node *ptr = (struct Node*)malloc(sizeof(struct Node));
    ptr->data = value;
    //Pushing node in stack
    ptr->next = top;
    top = ptr;
    }
    return top;
}

int pop(struct Node* ptr){
    if (isEmpty(ptr))
    {
        printf("Stack Underflow.");
    }else{   
    struct Node* tp = ptr;
    top = ptr->next;
    int data = ptr->data;
    free(ptr);
    return data;
    }

}

int peek(int pos){

    struct Node* ptr = top;

    for (int i = 0; (i < pos-1 && ptr->next != NULL); i++)
    {
        ptr = ptr->next;
    }
    if(ptr != NULL){
        printf("Element at position %d is %d.\n",pos,ptr->data);
        return ptr->data;
    }
    return -1;
}

int main(int argc, char const *argv[])
{
    top = push(top,28);
    top = push(top,18);
    top = push(top,15);
    top = push(top,7);
    int data = pop(top);
    printf("Element has been pop. %d.\n",data);
    linkedListTraversal(top);
    peek(1);
    return 0;
}
