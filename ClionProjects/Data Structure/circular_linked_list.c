#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node * next;
};

void linkedListTraversaal(struct Node* head){
    struct Node* ptr = head;

    do{   
        printf("Element is %d\n",ptr->data);
        ptr = ptr -> next;
    }while (ptr!=head);    
}

struct Node * insertAtFirst(struct Node *head, int data){
    struct Node * ptr = (struct Node *) malloc(sizeof(struct Node));
    ptr->data = data;
 
    struct Node * p = head->next;
    while(p->next != head){
        p = p->next;
    }
    // At this point p points to the last node of this circular linked list
 
    p->next = ptr;
    ptr->next = head;
    head = ptr;
    return head;
 
}


int main(int argc, char const *argv[])
{
    struct Node * head;
    struct Node * second;
    struct Node * third;
    struct Node * fourth;
    head = (struct Node *) malloc(sizeof(struct Node));
    second = (struct Node *) malloc(sizeof(struct Node));
    third = (struct Node *) malloc(sizeof(struct Node));
    fourth = (struct Node *) malloc(sizeof(struct Node));
    //Link first and second node
    head->data = 4;
    head->next = second;
    //Link second anf third node
    second->data = 3;
    second->next = third;
    //Link third and fourth node
    third->data = 2;
    third->next = fourth;
    //terminate the list
    fourth->data = 1;
    fourth->next = head;
    
    head = insertAtFirst(head,5);
    linkedListTraversaal(head);

    return 0;
}
