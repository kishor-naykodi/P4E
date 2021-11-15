#include <stdio.h>
#include <stdlib.h>

struct circularQueue
{
    int size;
    int f;
    int r;
    int *arr;
};

int isFull(struct circularQueue *q){
    if((q->r+1)%q->size == q->f){
        return 1;
    }
    return 0;
}

int isEmpty(struct circularQueue *q){
    if(q->r == q->f){
        return 1;
    }
    return 0;
}

void enqueue(struct circularQueue *q, int val){
    if(isFull(q)){
        printf("This circularQueue is full.");
    }else{
        q->r = (q->r +1)%q->size;
        q->arr[q->r] = val;
    }
}

int dequeue(struct circularQueue *q){
    if(isEmpty(q)){
        printf("This circularQueue is Empty.");
    }else{
        q->f= (q->f +1)%q->size;
        return q->arr[q->f];
    }
    return 0;
}

int main(int argc, char const *argv[])
{
    struct circularQueue q;
    q.size = 4;
    q.f = q.r = 0;
    q.arr = (int *) malloc(q.size * sizeof(int));

    //EncircularQueue few elements
    enqueue(&q,12);
    enqueue(&q,23);
    enqueue(&q,4);
    printf("%d\n",dequeue(&q));
    printf("%d\n",dequeue(&q));
    printf("%d\n",dequeue(&q));
    enqueue(&q,12);
    enqueue(&q,23);
    enqueue(&q,23);
    enqueue(&q,23);

    if(isEmpty(&q)){
        printf("Queue is empty\n");
    }
    if(isFull(&q)){
        printf("Queue is full\n");
    }

    return 0;
}
