#include <stdio.h>
#include <stdlib.h>

    struct Node* f = NULL;
    struct Node* r = NULL;

struct Node
{
    int data;
    struct Node* next;
};

int isEmpty(){
    if(f == NULL){
        return 1;
    }
    return 0;
}
int isFull(struct Node* qptr){
    if(qptr == NULL){
        return 1;
    }
    return 0;
}

void linkedListTraversal(struct Node *qptr)
{
    while (qptr != NULL)
    {
        printf("Element: %d\n", qptr->data);
        qptr = qptr->next;
    }
}


void enqueue (int val){

    struct Node* qptr = (struct Node*) malloc(sizeof(struct Node));

    if(isFull(qptr)){
        printf("Queue is full.\n");
    }else{
        qptr->data = val;
        qptr->next = NULL;
        if (f == NULL)
        {
            f = r = qptr;
        }else{
            r->next = qptr;
            r = qptr;
        }
    }  
}

int dequeue (){
    int val=-1;
    struct Node* qptr = f;   

    if(isEmpty(f)){
        printf("Queue is Empty.\n");
    }else{
        val = qptr->data;
        f = f->next;
        free(qptr);
    }
    return val;
}




int main(int argc, char const *argv[])
{
    dequeue();
    enqueue(10);
    enqueue(7);
    enqueue(24);
    printf("%d\n",dequeue());

    linkedListTraversal(f);
    return 0;
}
