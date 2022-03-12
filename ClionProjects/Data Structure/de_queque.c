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

void enqueueF(struct queue *q, int val){
    if(isFull(q)){
        printf("This queue is full.");
    }else{
        if(q->f == -1){
            printf("No space. cant perform equeue op.\n");
        }else if (q->f == 0)
        {
            printf("Enqueue in process...\n");
            printf("%d inserted in queue.\n\n",val);
            q->arr[q->f] = val;
            q->f--;
        }else{
            printf("Enqueue in process...\n");
            printf("%d inserted in queue.\n\n",val);
            q->f--;
            q->arr[q->f] = val;
        }
    }
}

void enqueueR(struct queue *q, int val){
    if(isFull(q)){
        printf("This queue is full.\n");
    }else{
        printf("Enqueue in process...\n");
        printf("%d has inserted in queue.\n\n",val);
        q->r++;
        q->arr[q->r] = val;
    }
}

int dequeueF(struct queue *q){
    if(isEmpty(q)){
        printf("This queue is Empty.");
    }else{
        printf("Dequeue in process...\n");
        q->f++;
        printf("%d has removed from queue.\n\n",q->arr[q->f]);
        return q->arr[q->f];
    }
    return 0;
}

int dequeueR(struct queue *q){
    if(isEmpty(q)){
        printf("This queue is Empty.");
    }else{
        printf("Dequeue in process...\n");
        q->r--;
        printf("%d has removed from queue.\n\n",q->arr[q->r]);
        return q->arr[q->r];
    }
    return 0;
}

int main(int argc, char const *argv[])
{
    struct queue q;
    q.size = 100;
    q.f = q.r = -1;
    q.arr = (int *) malloc(q.size * sizeof(int));

    enqueueR(&q,10);
    enqueueR(&q,20);
    enqueueR(&q,30);
    dequeueF(&q);
    enqueueF(&q,15);
    enqueueF(&q,35);
    dequeueF(&q);
    dequeueF(&q);

    queueTraversal(&q);

    return 0;
}
