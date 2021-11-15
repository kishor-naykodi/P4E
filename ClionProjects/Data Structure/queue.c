#include <stdio.h>
#include <stdlib.h>

struct queue
{
    int size;
    int f;
    int r;
    int *arr;
};  

int isFull(struct queue *q){
    if(q->r == q->size-1){
        return 1;
    }
    return 0;
}

int isEmpty(struct queue *q){
    if(q->r == q->f){
        return 1;
    }
    return 0;
}


void queueTraversal(struct queue *q){
    if (isEmpty(q)){
        printf("Queue is empty cant traverse.");
    }else{
        
        for (int i = 0; i < q->size-1; i++)
        {
            printf("Element:%d\n",q->arr[i]);
            if (q->arr[q->r] == q->arr[i])
            {
                break;
            }  
        }   
    }
}

void enqueue(struct queue *q, int val){
    if(isFull(q)){
        printf("This queue is full.");
    }else{
        q->r++;
        q->arr[q->r] = val;
    }
}

int dequeue(struct queue *q){
    if(isEmpty(q)){
        printf("This queue is Empty.");
    }else{
        q->f++;
        return q->arr[q->f];
    }
    return 0;
}

int main(int argc, char const *argv[])
{
    struct queue q;
    q.size = 100;
    q.f = q.r = -1;
    q.arr = (int *) malloc(q.size * sizeof(int));

    //Enqueue few elements
    enqueue(&q,12);
    enqueue(&q,23);
    enqueue(&q,4);

    queueTraversal(&q);
    return 0;
}
