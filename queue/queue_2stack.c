#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

struct node {
    int data;
    struct node *next;
};

struct stack{
    int count;
    struct node *temo;
    struct node *head;
};


struct queue{
    struct node *stack1;
    struct node * stack2;
}

bool isEmpty(struct stack *s){
    if(s->head == NULL){
        return true;
    }else{
        return false;
    }
}

void init_stack(){
    
}



int main(){


    return 0;
}