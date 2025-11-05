// Decleration and working of a linked List
// Declare structure with one int variable (preferably data) and a pointer that intially points to NULL.
// first part to be done manually
// specified function to create Node will be given in the next file

#include <stdio.h>
#include <stdlib.h> // generally needed for initialization

struct Node{
    int data; // declare data variable
    struct Node * next; // declared next pointer that would point to the next link in case multiple nodes exist, 
    // otherwise it would point to NULL
};

int main(){
    struct Node* head = (struct Node*)malloc(sizeof(struct Node)); 
    // Declare and initialize node, the syntax needed to initalise should be this 
    // (NOTE: start with struct Node* and end with struct Node), malloc and size of are used to dynamically allocate data 

    head->data = 10; // giving a random int value to the data variable of head node
    

    // Declaring a 2nd node 

    struct Node* second = (struct Node*)malloc(sizeof(struct Node));
    second->data  = 20; // assiging another random value 

    // assuming I have only 2 nodes in the whole data
    // initialize last (second) Node to null

    second->next = NULL;

    // now link 2nd and head
    // join next of head to second 

    head->next = second;

    // Now lets traverse
    // initialize a temp node that points to head

    struct Node* temp = head;

    // now the imp part 
    // there is a difference in the conditions of the while loop while we use it for traversing and a has a different condition for 
    // input and output, basically the only difference is next pointer addition and exemption

    while(temp != NULL){ // we did not use temp->next != NULL as it would only travel to the 2nd last node and not the last one 
        // we will require the commented condition rarely during addition and deletion of nodes
        printf("%d ", temp->data); // print data 
        temp = temp->next; // we traverse the temp pointer from the head till the end Node for traversal of the Nodes 
    }

    return 0;
}