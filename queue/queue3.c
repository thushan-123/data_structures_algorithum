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

int dequeue(struct queue *q ){
    if(q->head == NULL){
        printf("No Elements in Queue");
        exit(0);
    }else if(q->head == q->tail){
        q->count--;
        int x = q->head->data;
        free(q->head);
        return x;
    }
    struct node *t = q->head->next;
    int k = q->head->data;
    q->count--;
    free(q->head);
    q->head = t;
    return k;

}

void print_queue(struct queue *q){
    if(q->head == NULL){
        printf("No Elements in Queue");
        exit(0);
    }

    struct node *itr = q->head;
    while(itr != NULL){
        printf("| %d", itr->data);
        itr = itr->next;
    }
}

int size_q(struct queue *q){
    return q->count;
}

bool isEmpty(struct queue *q){
    if(q->head == NULL){
        return true;
    }
    return false;
}





int main(){

    struct queue q;
    init_queue(&q);
    enqueue(&q,10);
    enqueue(&q,20);
    enqueue(&q,30);
    int x = dequeue(&q);
    printf("%d \n", x);
    int y = dequeue(&q);
    printf("%d \n", y);
    print_queue(&q);
    return 0;

}