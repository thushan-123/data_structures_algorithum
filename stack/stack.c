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

Node* push(int value){

    // first allocate the memory
    Node *new_node = (Node*)malloc(sizeof(Node));

    if(new_node == NULL){
        printf("\nmemory allocation fail\n");
        exit(1);
    }

    if(head == NULL){
        // add first element into stack
        new_node->data = value;
        new_node->next = NULL;
        head = new_node;
    }
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