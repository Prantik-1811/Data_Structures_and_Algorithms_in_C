// implementation of stack and its functions using Arrays

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#define MAXSIZE 10

// Initializaion of ADT Stack

struct Stack{
    int top;
    int capacity;
    int *array;
};

// Function to create a Stack

struct Stack* CreateStack(){
    struct Stack* Stack1 = malloc(sizeof(struct Stack));
    Stack1->capacity = MAXSIZE;
    Stack1->top = -1;
    Stack1->array = malloc(Stack1->capacity * sizeof(int));
    return Stack1;
}

// function to check if stack is Empty

bool IsEmptyStack(struct Stack *Stack1){
    return(Stack1->top == -1);
}

// Function to check if stack is Full

bool IsFullStack(struct Stack *Stack1){
    return(Stack1->top == Stack1->capacity-1);
}

// Function to Push Data

void Push(struct Stack *Stack1, int data){
    if(IsFullStack(Stack1)){
        printf("Stack is FULL!!");
    }
    else{
        Stack1->array[++Stack1->top] = data;
    }
}

// function to pop data

void Pop(struct Stack *Stack1){
    if(IsEmptyStack(Stack1)){
        printf("Stack is Empty!!");
    }
    else{
        printf("%d ",Stack1->array[Stack1->top]);
        Stack1->top--;
    }
}



// Function to delete stack

void DeleteStack(struct Stack *Stack1){
    if(Stack1){
        if(Stack1->array){
            free(Stack1->array);
        }
        free(Stack1);
    }
}

int main(){
    struct Stack *s = CreateStack();

    Push(s, 10);
    Push(s, 20);
    Push(s, 30);

    Pop(s);
    Pop(s);

    DeleteStack(s);
    return 0;
}

