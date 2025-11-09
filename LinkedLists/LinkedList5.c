// Program to delete a Whole Linked List
// using the same program from file 4


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

void generalInsert(struct Node *head, int pos, int Data){
    if(pos == 1){
        struct Node* NewNode = (struct Node*)malloc(sizeof(struct Node));
        NewNode->data = Data; 
        NewNode->next = head;
        head = NewNode; 
    }
    else{
        int k=1; 
        struct Node* temp = head; 
        while(temp->next != NULL && k<pos-1){ 
            temp = temp->next;
            k++;
        }
        struct Node* NewNode = (struct Node*)malloc(sizeof(struct Node));
        NewNode->data = Data;
        NewNode->next = temp->next; 
        temp->next = NewNode;
    }

}




void GeneralDelete(struct Node* head, int pos){
    if(pos == 1){ 
        struct Node* temp = head;
        head = head->next;
        free(temp);
    }
    else{
        int k = 1;
        
        
        struct Node* temp1 = head;
        struct Node* temp2 = head->next;

        while(temp1->next != NULL && k<pos-1){ 
            temp1 = temp1->next;
            temp2 = temp2->next;
            k++;
        }
        temp1->next = temp2->next;
        temp2->next = NULL;
        free(temp2);
    }
}

// Function to delete the whole Linked List
// take 2 pointers and point one of them to head
// then run a while loop till u reach the end and using the 2nd pointer point to the node next of the first node
// delete the first node and then make them both point at the same node

void DeleteList(struct Node* head){
    struct Node* temp1 = head;
    struct Node* temp2 = (struct Node*)malloc(sizeof(struct Node));
    while(temp1 != NULL){
        temp2 = temp1->next;
        free(temp1);
        temp1 = temp2;
    }
    printf("Whole List Deleted");
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
    GeneralDelete(head, 3);
    DeleteList(head);
    return 0;
}
