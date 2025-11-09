// Devloping and implementing Circular Linked Lists

#include <stdio.h>
#include <stdlib.h>

struct Node{
    int data;
    struct Node *next;
};

// function to count the number of Nodes

int CountNodes(struct Node *head){
    struct Node* temp = head;
    int count = 0;
    do{
        temp = temp->next;
        count++;
    }while(temp != head);

    return count;
}

int main(){
    struct Node* head = (struct Node*)malloc(sizeof(struct Node));
    head->data =10;

    struct Node* second =(struct Node*)malloc(sizeof(struct Node));
    second->data = 20;

    head->next = second;
    second->next = head;

    int count = CountNodes(head);
    printf("%d", count);

    return 0;


}