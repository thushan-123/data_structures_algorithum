#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

struct node {
    int data;
    struct node *next;
};


struct queue
{
    struct node* head;
    int count;
    struct node *tmp;
    
};

void init_queue(struct queue *q){
    q->count = 0;
    q->head = NULL;
    q->tmp = NULL;
}

void enqueue(struct queue *q , int value){

    struct node* new_node = (struct node*)malloc(sizeof(struct node));
    if(new_node == NULL){
        printf("memory allocation fail");
        exit(0);
    }

    new_node->data = value;
    q->count++;

    if(q->head == NULL){
        q->head = new_node;
        q->tmp = new_node;
    }else {
        new_node->next = q->tmp;
        q->tmp = new_node;
    }
}


bool isEmpty(struct queue* q){
    if(q->head ==NULL){
        return true;
    }else{
        return false;
    }
}

int queue_size(struct queue* q){

    if (q->head == NULL){
        return q->count;
    }else{
        return q->count;
    }
}


int main(){


    return 0;

}