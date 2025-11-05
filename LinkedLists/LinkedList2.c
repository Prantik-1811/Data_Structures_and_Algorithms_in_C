// Now do Basic Declaration, initialization,addition and traversal using Functions

#include <stdio.h>
#include <stdlib.h>

struct Node{
    int data;
    struct Node *next;
};

// function for intialization of head node

struct Node* initalise(int Data){
    struct Node* head = (struct Node*)malloc(sizeof(struct Node));
    head->data = Data;
    head->next = NULL;
    return head;
}

// function for addition of further nodes (assumed at end, we'll see general position instersion later)

void addNode(struct Node *head, int Data){
    struct Node* temp = head;
    while(temp->next != NULL){ // traverse till last node
        temp = temp->next;
    }
    struct Node* NewNode = (struct Node*)malloc(sizeof(struct Node));
    NewNode->data = Data;
    temp->next = NewNode; // link the last node with new node
    NewNode->next = NULL; // new Last node so we put pointer to NULL 
}

// function for traversal

void traverse(struct Node *head){
    struct Node* temp = head;
    while(temp != NULL){ 
        printf("%d ", temp->data);
        temp = temp->next;
    }
}

int main(){
    // now call functions 
    struct Node* head = initalise(10); // dont forget to initialise head or we'll get errored
    addNode(head, 20);
    addNode(head, 30);
    addNode(head, 40);
    addNode(head, 50);
    traverse(head);
}