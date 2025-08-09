#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>


struct node{
    int data;
    struct node *next;
};

struct queue{
    int count;
    struct node *head;
    struct node *tail;
};

void init_queue(struct queue *q){
    q->count = 0;
    q->head = NULL;
    q->tail = NULL;
}

void enqueue(struct queue *q, int value){

    struct node *new_node = (struct node*)malloc(sizeof(struct node));

    if(new_node == NULL){
        printf("Memory Allocation Fail");
        exit(1);
    }
    new_node->data = value;
    q->count++;

    if(q->head == NULL){
        q->head = new_node;
        q->tail = new_node;
    }else {
        q->tail->next = new_node;
        q->tail = new_node;
    }
}





int main(){

    struct queue q;
    init_queue(&q);
    enqueue(&q,10);
    enqueue(&q,20);
    return 0;

}