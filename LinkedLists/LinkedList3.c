// Now we do General Insertion of a Node at position k
// we take the same LL as in program 2

#include <stdio.h>
#include <stdlib.h>

struct Node{
    int data;
    struct Node *next;
};

struct Node* initialize(int Data){
    struct Node* head = (struct Node*)malloc(sizeof(struct Node));
    head->data = Data;
    head->next = NULL;
    return head;
}

void traverse(struct Node* head){
    struct Node* temp = head;
    while(temp!=NULL){
        printf("%d ", temp->data);
        temp = temp->next;
    }
}

// now our logic of general addition
// if position = 1, we add head;
// if position other than one, we traverse to (n-1)th node and add a new node such that , let temp point to (n-1)th node
//first NewNode->next = temp->next, then temp->next = NewNode

void generalInsert(struct Node *head, int pos, int Data){
    if(pos == 1){
        struct Node* NewNode = (struct Node*)malloc(sizeof(struct Node));
        NewNode->data = Data; // change pointers
        NewNode->next = head;
        head = NewNode; // point head to the new head (NewNode)
    }
    else{
        int k=1; // intialise counter k
        struct Node* temp = head; // point to head
        while(temp->next != NULL && k<pos-1){ // reach to (n-1)th node, does not handle out of bounds yet
            temp = temp->next;
            k++;
        }
        struct Node* NewNode = (struct Node*)malloc(sizeof(struct Node));
        NewNode->data = Data;
        NewNode->next = temp->next; // change pointers
        temp->next = NewNode;
    }

}

int main(){
    struct Node* head = initialize(10);
    generalInsert(head, 1, 5);
    generalInsert(head, 2, 11);
    generalInsert(head, 3, 12);
    generalInsert(head, 4, 13);
    generalInsert(head, 5, 14);
    generalInsert(head, 6, 15);
    generalInsert(head, 7, 16);

    traverse(head);
    return 0;
}
