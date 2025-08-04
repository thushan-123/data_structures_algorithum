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

int dequeue(struct queue *q){
    if(q->head == NULL){
        printf("queue is empty");
        exit(0);
    }else if (q->tmp == q->head){
        int k = q->tmp->data;
        free(q->head);
        return k;
    }else{

        struct node *tempory = q->tmp;
        while(tempory->next != q->head){
            tempory = tempory->next;
        }
        int k = tempory->next->data;
        free(q->head);
        q->head = tempory;
        return k;

    }
}





int main(){

    struct queue q;
    init_queue(&q);
    enqueue(&q,10);
    enqueue(&q,20);
    enqueue(&q,30);
    int x = dequeue(&q);
    printf("dequeue %d\n", x);
    int y = dequeue(&q);
    printf("dequeue %d\n", y);
    int z = dequeue(&q);
    printf("dequeue %d\n", z);

    enqueue(&q,50);
    enqueue(&q,60);
    enqueue(&q,70);


    return 0;

}