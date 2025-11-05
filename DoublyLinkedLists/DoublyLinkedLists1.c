// Declaration of A doubly Linked List is similar to a singly linked List but with an extra pointer that points to the previous node
// the next of last node is NULL and the prev of the first is NULL

#include <stdio.h>
#include <stdlib.h>

struct Node{
    int data;
    struct Node *next;
    struct Node *prev; // extra back pointer
};

// Direct initialization

int main(){
    struct Node* head = (struct Node*)malloc(sizeof(struct Node));
    head->data = 10;
    head->prev = NULL;

    struct Node* second = (struct Node*)malloc(sizeof(struct Node));
    second->data = 20;
    second->next = NULL;
    second->prev = head;

    head->next = second;

    struct Node* temp = head;
    while(temp != NULL){
        printf("%d ", temp->data);
        temp = temp->next;
    }

    return 0;
}