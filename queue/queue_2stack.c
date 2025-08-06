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


bool isEmpty(struct stack *s){
    if(s->head == NULL){
        return true;
    }else{
        return false;
    }
}



int main(){


    return 0;
}