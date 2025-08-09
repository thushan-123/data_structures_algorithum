#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>


struct node{
    int data;
    struct node *next;
}

struct queue{
    int count;
    struct node head;
    struct node temp;
}

void init_queue(struct queue *q){
    q->count = 0;
    q->head = NULL;
    q->temp = NULL;
}




int main(){

    return 0;

}