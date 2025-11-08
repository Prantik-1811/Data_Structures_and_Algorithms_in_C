// initialization, addition and traversal of nodes using functions



#include <stdio.h>
#include <stdlib.h>

struct Node{
    int data;
    struct Node *next;
    struct Node *prev;
};

struct Node* initialize(int Data){
    struct Node* head = (struct Node*)malloc(sizeof(struct Node));
    head->data = Data;
    head->next = NULL;
    head->prev = NULL;
    return head;
}

struct Node* AddNode(struct Node* head, int Data, int p){
    struct Node* newnode = (struct Node*)malloc(sizeof(struct Node));
    newnode->data = Data;

    if(p==1){
        newnode->prev = NULL;
        newnode->next = head;
        head->prev = newnode;
        return newnode;
    }

    struct Node* temp = head;
    for(int k=1; k<p-1 && temp->next != NULL; k++)
        temp = temp->next;

    newnode->next = temp->next;
    newnode->prev = temp;

    if(temp->next != NULL)
        temp->next->prev = newnode;

    temp->next = newnode;

    return head;
}

void Traverse(struct Node *head){
    struct Node* temp = head;
    while(temp!=NULL){
        printf("%d ", temp->data);
        temp = temp->next;
    }
}

int main(){
    struct Node* head = initialize(10);
    head = AddNode(head, 20, 2);
    head = AddNode(head, 30, 3);
    head = AddNode(head, 40, 4);
    head = AddNode(head, 50, 5);

    Traverse(head);
}
