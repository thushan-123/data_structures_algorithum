#include <stdio.h>
#include <stdlib.h>


// STACK work LIFO (last in first out)

// Operations
// push -> insert data in stack
// peek -> return to the peek value
// pop  -> remove data in stack
// isEmpty -> returns stack emty or not

// struct key word access . operator for variable , -> operator for pointor 
typedef struct node{
    int data;
    struct node *next;
}   Node;

Node *head = NULL;
Node *tail = NULL;

int push(int value){

    // first allocate the memory
    Node *new_node = (Node*)malloc(sizeof(Node));
}

bool isEmpty{
    return true;
}

int peek(){
    return 0;
}




int main(){
    return 0;
}