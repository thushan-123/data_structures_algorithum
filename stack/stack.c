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

void push(struct stack *stk, int value){
    struct node *new_node = (struct node *)malloc(sizeof(struct node));
    new_node->data = value;
    stk->count++;

    if(stk->head == NULL){
        stk->head = new_node;
        stk->temp = new_node;
    }else{
        new_node->next = stk->temp;
        stk->temp = new_node;
    }
}


bool isEmpty(struct stack *s){
    if(s->head ==NULL){
        return false;
    }else{
        return true;
    }
}

int size(struct stack *s){
    return s->count;
}

int pop(struct stack *s){
    if(s->head == NULL){
        printf("No elements");
        exit(1);
    }else {
        struct node* t = s->temp;
        s->temp = s->temp->next;
        int d = t->data;
        free(t);
        return d;
    }
}

void stack_print(struct stack *s){
    if(s->head == NULL){
        printf("Stack is Empty");
    }else{
        struct node *tmp = s->temp;
        while(tmp->next != NULL){
            printf("| %d ", tmp->data);
            tmp = tmp->next;
        }
    }
}
int main(){
    

    return 0;
}