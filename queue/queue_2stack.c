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
    struct stack *stack1;
    struct stack * stack2;
}



void init_queue(struct queue* q){
    
}




int main(){


    return 0;
}