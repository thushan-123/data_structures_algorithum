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
};

// first create stack methods;

// impemnt push method

void push(struct stack* s, int value){
    struct node *new_node = (struct node*)malloc(sizeof(struct node));
    

    if(new_node == NULL){
        printf("Memory Allocation Fail");
        
    }
    new_node->data = value;
    new_node->next = NULL;
    s->count++;

    if(s->head == NULL){
        s->head = new_node;
        s->temp = new_node;
    }else{
        new_node->next = s->temp;
        s->temp = new_node;

    }
}

int pop(struct stack* s){

    if(s->head == NULL){
        return -1;
    }else if(s->head == s->temp){
        int t = s->head->data;
        free(s->head);
        s->head = NULL;
        s->temp = NULL;
        s->count = 0;
        return t;
    }

    struct node * tp = s->temp->next;
    int v = s->temp->data;
    free(s->temp);
    s->temp = tp;
    return v;

}

bool isEmpty(struct stack *s){
    if(s->head == NULL){
        return true;
    }

    return false;
}


void init_queue(struct queue* q){
    q->stack1 = (struct stack*)malloc(sizeof(struct stack));
    q->stack2 = (struct stack*)malloc(sizeof(struct stack));
    
    if(q->stack1 == NULL || q->stack2 == NULL){
        printf("stack Memery allocation fail.");
        exit(1);
    }
    q->stack1->head = NULL;
    q->stack1->temp = NULL;
    q->stack1->count = 0;
    
    q->stack2->head = NULL;
    q->stack2->temp = NULL;
    q->stack2->count = 0;

    q->queue_count = 0;

}

void enqueue(struct queue* q, int value){
    //push to the all elements in stack1

    push(q->stack1,value);
}

int dequeue(struct queue* q){
    // check stack2 is empty or not
    if(isEmpty(q->stack2)){
        // all stack1 elemnts push in stack2
        while (!isEmpty(q->stack1)){
            push(q->stack2,pop(q->stack1));
        }
        return pop(q->stack2);
    }else{
        return pop(q->stack2);
    }
}



int main(){

    struct queue q;
    init_queue(&q);
    enqueue(&q,10);
    enqueue(&q,20);
    enqueue(&q,30);
    printf("%d \n",dequeue(&q));
    printf("%d \n",dequeue(&q));
    
    return 0;
}