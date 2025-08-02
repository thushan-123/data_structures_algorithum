#include <stdio.h>
#include <stdlib.h>


// STACK work LIFO (last in first out)

// Operations
// push -> insert data in stack
// peek -> return to the peek value
// pop  -> remove data in stack
// isEmpty -> returns stack emty or not

// struct key word access . operator for variable , -> operator for pointor 
struct node{
    int data;
    struct node *next;
}

struct stack{
    struct node *head;
    struct node *temp;
    int count;
}

void initStack(struct stack*s){
    s->head = NULL;
    s->temp = NULL;
    s->count = 0;
}





bool isEmpty(struct stack *s){
    if
}

int main(){
    

    return 0;
}