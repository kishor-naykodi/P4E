#include <stdio.h>
#include <stdlib.h>

struct Node
{
    struct Node* prev;
    int data;
    struct Node* next;
};

void linkedListTraversal(struct Node* ptr)
{
    while (ptr != NULL)
    {
        printf("Element: %d\n", ptr->data);
        ptr = ptr->next;
    }
    
}

void linkedListTraversalReversed(struct Node* ptr)
{
    do{
        printf("Element: %d\n", ptr->data);
        ptr = ptr->prev;
    }while (ptr != NULL);   
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
    head->prev = NULL;
    head->data = 7;
    head->next = second;
    //Link second anf third node
    second->prev = head;
    second->data = 15;
    second->next = third;
    //Link third and fourth node
    third->prev = second;
    third->data = 24;
    third->next = fourth;
    //terminate the list
    fourth->prev = third;
    fourth->data = 66;
    fourth->next = NULL;
    
    linkedListTraversal(head); 
    struct Node* ptr = fourth;
    linkedListTraversalReversed(ptr); 
    return 0;
}
