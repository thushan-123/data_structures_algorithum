#include <stdio.h>
#include <stdlib.h>

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





int main(){


    return 0;

}