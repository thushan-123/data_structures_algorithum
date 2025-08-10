#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

struct node {
    int data;
    struct node *next;
};

struct stack{
    int count;
    struct node *temp;
    struct node *head;
};


struct queue{
    int queue_count;
    struct stack *stack1;
    struct stack * stack2;
}

// first create stack methods;

// impemnt push method





void init_queue(struct queue* q){
    q->stack1->head = NULL;
    q->stack1->temp = NULL;
    q->stack1->count = 0;
    
    q->stack2->head = NULL;
    q->stack2->temp = NULL;
    q->stack2->count = 0;

    q->queue_count = 0;

}




int main(){


    return 0;
}