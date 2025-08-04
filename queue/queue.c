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

void add(struct queue *q , int value){

    struct node* new_node = (struct node*)malloc(sizeof(struct node));
    if(new_node == NULL){
        printf("memory allocation fail");
        exit(0);
    }
    
    new_node->data = value;
}



int main(){


    return 0;

}